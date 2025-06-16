#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemPrefab.generated.h"

class UBaseCharacterItem;
class UBaseItem;
class UCustomizeItem;

UCLASS(BlueprintType)
class POLARIS_API UItemPrefab : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UBaseItem> BaseItemRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UBaseCharacterItem> BaseCharacterItemRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UCustomizeItem> CustomizeItemRef;
    
    UPROPERTY(BlueprintReadOnly)
    FString ParentItemPrefabName;
    
    UItemPrefab();

    UFUNCTION(BlueprintCallable)
    bool IsValidItemPrefab();
    
};

