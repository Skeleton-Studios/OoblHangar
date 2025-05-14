#pragma once
#include "CoreMinimal.h"
#include "MaterialAnimationCurveSet.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct POLARIS_API FMaterialAnimationCurveSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* StartCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* LoopCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* OneShotCurve;
    
    UPROPERTY(BlueprintReadWrite)
    float DefaultValue;
    
    FMaterialAnimationCurveSet();
};

