#pragma once
#include "CoreMinimal.h"
#include "EGhostOrderState.h"
#include "EGhostOrderType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGHudGvG.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGHudGvG : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGHudGvG();

    UFUNCTION(BlueprintNativeEvent)
    void Show(bool NewShow);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPreOrder(int32 side, int32 orderIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOrder(EGhostOrderType Type, EGhostOrderState State, int32 remain_time, int32 remain_count);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitHudOrderOnBattle(bool is_left, bool is_online_gvg, bool is_visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitHudOnRound();
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitHudOnBattle();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ExecuteFeedback(bool is_positive);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearPreOrder(int32 side);
    
};

