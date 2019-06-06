// Copyright 2017 - 2018 Code 4 Game, Org. All Rights Reserved.

#include "glTFForUE4EdPrivatePCH.h"
#include "glTF/glTFImporterEdAnimationSequence.h"

#include "glTF/glTFImporterOptions.h"
#include "glTF/glTFImporter.h"

#include "AssetRegistryModule.h"

#if ENGINE_MINOR_VERSION < 13
#else
#include "Animation/AnimSequence.h"
#endif

#define LOCTEXT_NAMESPACE "glTFForUE4EdModule"

TSharedPtr<FglTFImporterEdAnimationSequence> FglTFImporterEdAnimationSequence::Get(UFactory* InFactory, UClass* InClass, UObject* InParent, FName InName, EObjectFlags InFlags, FFeedbackContext* InFeedbackContext)
{
    TSharedPtr<FglTFImporterEdAnimationSequence> glTFImporterEdAnimationSequence = MakeShareable(new FglTFImporterEdAnimationSequence);
    glTFImporterEdAnimationSequence->Set(InClass, InParent, InName, InFlags, InFeedbackContext);
    glTFImporterEdAnimationSequence->InputFactory = InFactory;
    return glTFImporterEdAnimationSequence;
}

FglTFImporterEdAnimationSequence::FglTFImporterEdAnimationSequence()
{
    //
}

FglTFImporterEdAnimationSequence::~FglTFImporterEdAnimationSequence()
{
    //
}

UAnimSequence* FglTFImporterEdAnimationSequence::CreateAnimationSequence(const TWeakPtr<FglTFImporterOptions>& InglTFImporterOptions, const std::shared_ptr<libgltf::SGlTF>& InglTF
    , const TArray<FTransform>& InNodeRelativeTransforms, const TArray<FTransform>& InNodeAbsoluteTransforms, const FglTFBuffers& InBuffers, const TMap<int32, FString>& InNodeIndexToBoneNames
    , USkeletalMesh* InSkeletalMesh, USkeleton* InSkeleton
    , const glTFForUE4::FFeedbackTaskWrapper& InFeedbackTaskWrapper) const
{
    if (!InglTF || InglTF->animations.empty() || InglTF->skins.empty() || !InSkeleton) return nullptr;

    FText TaskName = FText::Format(LOCTEXT("BeginImportSkeletalAnimationTask", "Importing the skeletal animation ({0})"), FText::FromName(InputName));
    glTFForUE4::FFeedbackTaskWrapper FeedbackTaskWrapper(FeedbackContext, TaskName, true);

    FString AnimationObjectName = FString::Printf(TEXT("%s_AnimationSequence"), *InputName.ToString());

    UAnimSequence* AnimSequence = LoadObject<UAnimSequence>(InputParent, *AnimationObjectName);
    if (!AnimSequence)
    {
        AnimSequence = NewObject<UAnimSequence>(InputParent, UAnimSequence::StaticClass(), *AnimationObjectName, InputFlags);
        checkSlow(AnimSequence);
        if (AnimSequence) FAssetRegistryModule::AssetCreated(AnimSequence);
    }
    //WARN:
    if (!AnimSequence) return nullptr;

    AnimSequence->SetSkeleton(InSkeleton);
    AnimSequence->CreateAnimation(InSkeletalMesh);

    FeedbackTaskWrapper.StatusUpdate(0, 2, LOCTEXT("SetSkeleton", "Set the skeleton to an animation sequence"));

    TArray<FglTFAnimationSequenceDatas> glTFAnimationSequenceDatasArray;

    FeedbackTaskWrapper.StatusUpdate(0, 2, LOCTEXT("GetAnimationSequenceData", "1/2 Get the animation sequence data from glTF"));

    for (int32 i = 0; i < static_cast<int32>(InglTF->animations.size()); ++i)
    {
        const std::shared_ptr<libgltf::SAnimation>& glTFAnimationPtr = InglTF->animations[i];
        FglTFAnimationSequenceDatas glTFAnimationSequenceDatas;
        if (!FglTFImporter::GetAnimationSequenceData(InglTF, glTFAnimationPtr, InBuffers, glTFAnimationSequenceDatas))
        {
            //WARN:
            continue;
        }
        glTFAnimationSequenceDatasArray.Add(glTFAnimationSequenceDatas);

        FeedbackTaskWrapper.StatusUpdate(i, static_cast<int32>(InglTF->animations.size()), LOCTEXT("GetAnimationSequenceData", "1/2 Push the animation sequence data from glTF to a array"));
    }

    /// recalculate the transform for the animation sequence.
    for (FglTFAnimationSequenceDatas& SequenceDatas : glTFAnimationSequenceDatasArray)
    {
        for (FglTFAnimationSequenceData& SequenceData : SequenceDatas.Datas)
        {
            for (FglTFAnimationSequenceKeyData& SequenceKeyData : SequenceData.KeyDatas)
            {
                SequenceKeyData.Transform *= InNodeRelativeTransforms[SequenceData.NodeIndex].Inverse();
            }
        }
    }

    FeedbackTaskWrapper.StatusUpdate(1, 2, LOCTEXT("AddKeyToSequence", "2/2 Add the key to sequence"));

    int32 NumFrames = 0;
    float SequenceLength = 0.0f;
    for (int32 i = 0; i < glTFAnimationSequenceDatasArray.Num(); ++i)
    {
        const FglTFAnimationSequenceDatas& glTFAnimationSequenceDatas = glTFAnimationSequenceDatasArray[i];
        for (const FglTFAnimationSequenceData& glTFAnimationSequenceData : glTFAnimationSequenceDatas.Datas)
        {
            if (glTFAnimationSequenceData.NodeIndex < 0 || glTFAnimationSequenceData.NodeIndex >= InNodeAbsoluteTransforms.Num())
            {
                //WARN:
                continue;
            }
            if (!InNodeIndexToBoneNames.Contains(glTFAnimationSequenceData.NodeIndex))
            {
                //WARN:
                continue;
            }

            FName CurveName = FName(*(InNodeIndexToBoneNames[glTFAnimationSequenceData.NodeIndex]));
#if ENGINE_MINOR_VERSION < 14
            FSmartNameMapping::UID CurveUID = FSmartNameMapping::MaxUID;
#else
            SmartName::UID_Type CurveUID = SmartName::MaxUID;
#endif
#if ENGINE_MINOR_VERSION < 11
            FSmartNameMapping* NameMapping = InSkeleton->SmartNames.GetContainer(USkeleton::AnimTrackCurveMappingName);
            if (NameMapping == nullptr)
            {
                InSkeleton->Modify(true);
                InSkeleton->SmartNames.AddContainer(USkeleton::AnimTrackCurveMappingName);
                NameMapping = InSkeleton->SmartNames.GetContainer(USkeleton::AnimTrackCurveMappingName);
                check(NameMapping);
            }
            if (!NameMapping->AddOrFindName(CurveName, CurveUID))
            {
                //WARN:
                continue;
            }
#elif ENGINE_MINOR_VERSION < 13
            const FSmartNameMapping* NameMapping = InSkeleton->GetOrAddSmartNameContainer(USkeleton::AnimTrackCurveMappingName);
            check(NameMapping);
            if (!InSkeleton->AddSmartNameAndModify(USkeleton::AnimTrackCurveMappingName, CurveName, CurveUID))
            {
                //WARN:
                continue;
            }
#else
            FSmartName NewSmartName;
            if (!InSkeleton->AddSmartNameAndModify(USkeleton::AnimTrackCurveMappingName, CurveName, NewSmartName))
            {
                //WARN:
                continue;
            }
            CurveUID = NewSmartName.UID;
#endif

            for (const FglTFAnimationSequenceKeyData& KeyData : glTFAnimationSequenceData.KeyDatas)
            {
                AnimSequence->AddKeyToSequence(KeyData.Time, CurveName, KeyData.Transform);

#if ENGINE_MINOR_VERSION < 16
                FTransformCurve* TransformCurve = static_cast<FTransformCurve*>(AnimSequence->RawCurveData.GetCurveData(CurveUID, FRawCurveTracks::TransformType));
#else
                FTransformCurve* TransformCurve = static_cast<FTransformCurve*>(AnimSequence->RawCurveData.GetCurveData(CurveUID, ERawCurveTrackTypes::RCT_Transform));
#endif
                {
                    FKeyHandle KeyHandle = TransformCurve->TranslationCurve.FloatCurves->FindKey(KeyData.Time);
                    TransformCurve->TranslationCurve.FloatCurves->SetKeyInterpMode(KeyHandle, KeyData.TranslationInterpolation);
                }
                {
                    FKeyHandle KeyHandle = TransformCurve->RotationCurve.FloatCurves->FindKey(KeyData.Time);
                    TransformCurve->RotationCurve.FloatCurves->SetKeyInterpMode(KeyHandle, KeyData.TranslationInterpolation);
                }
                {
                    FKeyHandle KeyHandle = TransformCurve->ScaleCurve.FloatCurves->FindKey(KeyData.Time);
                    TransformCurve->ScaleCurve.FloatCurves->SetKeyInterpMode(KeyHandle, KeyData.TranslationInterpolation);
                }

                SequenceLength = FMath::Max(SequenceLength, KeyData.Time);
            }
        }
        NumFrames = FMath::Max(NumFrames, glTFAnimationSequenceDatas.Datas.Num());

        FeedbackTaskWrapper.StatusUpdate(i + glTFAnimationSequenceDatasArray.Num(), glTFAnimationSequenceDatasArray.Num() * 2, LOCTEXT("AddKeyToSequence", "2/2 Add the key to sequence"));
    }

    AnimSequence->SequenceLength = SequenceLength;
#if ENGINE_MINOR_VERSION < 22
    AnimSequence->NumFrames = NumFrames;
#else
    AnimSequence->SetRawNumberOfFrame(NumFrames);
#endif

    AnimSequence->Modify(true);
    AnimSequence->BakeTrackCurvesToRawAnimation();
    AnimSequence->MarkPackageDirty();
    return AnimSequence;
}

#undef LOCTEXT_NAMESPACE
