#pragma once
#include "CoreMinimal.h"
#include "EPolarisStageGimmickBreakPattern.h"
#include "PolarisMeshDeformParamArray.h"
#include "PolarisStageGimmickActor.h"
#include "PolarisStageGimmickReaction.h"
#include "PolarisStageGimmickSkeletalMeshActor.generated.h"

class APolarisMobAnimal;
class UAnimationAsset;
class UDecalComponent;
class UFXSystemComponent;
class ULightComponent;
class UNiagaraComponent;
class UPolarisColorBlendComponent;
class UPolarisMeshDeformComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS()
class POLARIS_API APolarisStageGimmickSkeletalMeshActor : public APolarisStageGimmickActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere, Category = "Polaris|StageGimmickSkeletalMesh")
    TObjectPtr<UStaticMeshComponent> DefaultMeshComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere, Category = "Polaris|StageGimmickSkeletalMesh")
    TObjectPtr<USkeletalMeshComponent> SkeletalMeshComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere, Category = "Polaris|StageGimmickSkeletalMesh")
    TObjectPtr<UStaticMeshComponent> BrokenMeshComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere, Category = "Polaris|StageGimmickSkeletalMesh")
    TArray<TObjectPtr<USkeletalMeshComponent>> SkeletalMeshComponents;
    
    UPROPERTY(Instanced, VisibleAnywhere, Category = "Polaris|StageGimmickSkeletalMesh")
    TArray<TObjectPtr<ULightComponent>> LightComponents;
    
    UPROPERTY(Instanced, VisibleAnywhere, Category = "Polaris|StageGimmickSkeletalMesh")
    TArray<TObjectPtr<UFXSystemComponent>> FXSystemComponents;
    
    UPROPERTY(Instanced, VisibleAnywhere, Category = "Polaris|StageGimmickSkeletalMesh")
    TArray<TObjectPtr<UPolarisColorBlendComponent>> PolarisColorBlendComponents;
    
    UPROPERTY(EditAnywhere, Instanced, Category = "Polaris|StageGimmickSkeletalMesh")
    TObjectPtr<UPolarisMeshDeformComponent> PolarisMeshDeformComponent;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmickSkeletalMesh")
    TArray<FPolarisMeshDeformParamArray> DeformParams;
    
    UPROPERTY(Instanced, VisibleAnywhere, Category = "Polaris|StageGimmickSkeletalMesh")
    TArray<TObjectPtr<UStaticMeshComponent>> DecalMeshs;
    
    UPROPERTY(Instanced)
    TObjectPtr<UStaticMeshComponent> DecalMesh;
    
    UPROPERTY(Instanced)
    TObjectPtr<UStaticMeshComponent> DecalMesh_Broken;
    
    UPROPERTY(Instanced, VisibleAnywhere, Category = "Polaris|StageGimmickSkeletalMesh")
    TArray<TObjectPtr<UDecalComponent>> Decals;
    
    UPROPERTY(Instanced)
    TObjectPtr<UDecalComponent> decal;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmickSkeletalMesh")
    TArray<FPolarisStageGimmickReaction> ReactionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmickSkeletalMesh")
    bool IsDeform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmickSkeletalMesh")
    bool IsAlwaysHitReaction;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmickSkeletalMesh")
    int32 HitInterval;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmickSkeletalMesh")
    bool NoPriorityCancel;
    
    UPROPERTY(BlueprintReadOnly, Category = "Polaris|StageGimmickSkeletalMesh")
    EPolarisStageGimmickBreakPattern BreakPattern;
    
    UPROPERTY(BlueprintReadOnly, Category = "Polaris|StageGimmickSkeletalMesh")
    EPolarisStageGimmickBreakPattern BreakPattern2nd;
    
    UPROPERTY(BlueprintReadOnly, Category = "Polaris|StageGimmickSkeletalMesh")
    bool IsBreakPattern2nd;
    
    UPROPERTY(BlueprintReadOnly, Category = "Polaris|StageGimmickSkeletalMesh")
    TArray<TObjectPtr<UAnimationAsset>> AnimationAsset2nd;
    
    UPROPERTY(BlueprintReadWrite, Category = "Polaris|StageGimmickSkeletalMesh")
    int32 BreakLevel;
    
    UPROPERTY(VisibleInstanceOnly, Category = "Polaris|StageGimmickSkeletalMesh")
    int32 VisibleSkeletalMeshFlag;
    
    UPROPERTY(VisibleInstanceOnly, Category = "Polaris|StageGimmickSkeletalMesh")
    int32 VisibleLightFlag;
    
    UPROPERTY(VisibleInstanceOnly, Category = "Polaris|StageGimmickSkeletalMesh")
    int32 VisibleEffectFlag;
    
    UPROPERTY(BlueprintReadOnly, Category = "Polaris|StageGimmickSkeletalMesh")
    EPolarisStageGimmickBreakPattern CurrentBreakPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmickSkeletalMesh")
    TArray<TSoftObjectPtr<APolarisMobAnimal>> MobAnimalSlot;

    uint8 UnknownData_APolarisStageGimmickSkeletalMeshActor01[0x8] = {};
    
    UPROPERTY(Export, VisibleAnywhere, Category = "Polaris|StageGimmickSkeletalMesh")
    TArray<TWeakObjectPtr<UNiagaraComponent>> ReactHitEffectInstances;
    
    UPROPERTY()
    int32 LastImpulseStrengthType;

    uint8 UnknownData_APolarisStageGimmickSkeletalMeshActor02[0x8] = {};
    
    APolarisStageGimmickSkeletalMeshActor(const FObjectInitializer& ObjectInitializer);

};

