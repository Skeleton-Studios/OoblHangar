#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseMakeItemEdit.h"
#include "BaseMakeItem.generated.h"

class UTexture;

UCLASS(BlueprintType)
class POLARIS_API UBaseMakeItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MakePositionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UTexture> TextureBaseColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UTexture> TextureNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UTexture> TextureRAD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UTexture> TextureMTM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UTexture> TextureOpAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TextureOpAlphaUseBaseColorAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBaseMakeItemEdit EditValue;
    
    UBaseMakeItem();

};

