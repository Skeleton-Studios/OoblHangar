#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyTemplateMessageInfo.h"
#include "LobbyTemplateMessage.generated.h"

class ULobbyTemplateMessage;
class ULobbyTemplateMessageSubCategoryDataAsset;

UCLASS(BlueprintType)
class POLARIS_API ULobbyTemplateMessage : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, FLobbyTemplateMessageInfo> InfoMap;
    
    UPROPERTY(BlueprintReadOnly)
    ULobbyTemplateMessageSubCategoryDataAsset* SubCategoryDataAsset;
    
    ULobbyTemplateMessage();

    UFUNCTION(BlueprintPure)
    FString GetLocalizedText(int32 template_id, int32 template_sub_id);
    
    UFUNCTION(BlueprintPure)
    static ULobbyTemplateMessage* GetLobbyTemplateMessage();
    
};

