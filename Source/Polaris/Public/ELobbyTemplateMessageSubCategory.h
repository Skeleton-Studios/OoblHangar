#pragma once
#include "CoreMinimal.h"
#include "ELobbyTemplateMessageSubCategory.generated.h"

UENUM()
enum class ELobbyTemplateMessageSubCategory : uint8 {
    None,
    Character,
    BattleMode,
};

