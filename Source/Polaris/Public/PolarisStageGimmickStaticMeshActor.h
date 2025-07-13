#pragma once
#include "CoreMinimal.h"
#include "PolarisStageGimmickActor.h"
#include "PolarisStageGimmickStaticMeshActor.generated.h"

class UStaticMeshComponent;

UCLASS()
class POLARIS_API APolarisStageGimmickStaticMeshActor : public APolarisStageGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleAnywhere, Category = "Polaris|StageGimmickStaticMesh")
    TObjectPtr<UStaticMeshComponent> StaticMeshComponent;
    
public:
    APolarisStageGimmickStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

