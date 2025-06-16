#pragma once
#include "CoreMinimal.h"
#include "AnimNode_KawaiiPhysics.h"
#include "KawaiiPhysicsLimitsDataAsset.h"
#include "KawaiiPhysicsDynamicBoneData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct KAWAIIPHYSICS_API FKawaiiPhysicsDynamicBoneData {

    GENERATED_BODY()
    
public:
    UPROPERTY(EditAnywhere)
    FName RootBone;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ExcludeBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKawaiiPhysicsSettings PhysicsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UCurveFloat> DampingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UCurveFloat> WorldDampingLocationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UCurveFloat> WorldDampingRotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UCurveFloat> StiffnessCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UCurveFloat> RadiusCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UCurveFloat> LimitAngleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DummyBoneLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBoneForwardAxis BoneForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlanarConstraint PlanarConstraint;
    
    UPROPERTY(EditAnywhere)
    TArray<FSphericalLimitData> SphericalLimitsData;
    
    UPROPERTY(EditAnywhere)
    TArray<FCapsuleLimitData> CapsuleLimitsData;
    
    UPROPERTY(EditAnywhere)
    TArray<FPlanarLimitData> PlanarLimitsData;
    
    UPROPERTY()
    TArray<FSphericalLimit> SphericalLimits;
    
    UPROPERTY()
    TArray<FCapsuleLimit> CapsuleLimits;
    
    UPROPERTY()
    TArray<FPlanarLimit> PlanarLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TeleportDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TeleportRotationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Gravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WindScale;
    
    FKawaiiPhysicsDynamicBoneData();
};

