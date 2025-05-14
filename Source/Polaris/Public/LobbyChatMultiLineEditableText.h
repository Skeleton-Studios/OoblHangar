#pragma once
#include "CoreMinimal.h"
#include "PolarisMultiLineEditableText.h"
#include "LobbyChatMultiLineEditableText.generated.h"

UCLASS()
class ULobbyChatMultiLineEditableText : public UPolarisMultiLineEditableText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnMultiLineEditableTextKeyDownEvent OnKeyDown;
    
    ULobbyChatMultiLineEditableText();

};

