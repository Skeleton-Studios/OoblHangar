#pragma once
#include "CoreMinimal.h"
#include "ELobbyTemplateMessageCategory.generated.h"

UENUM()
enum class ELobbyTemplateMessageCategory : uint8 {
    Favorite,
    All,
    Greeting,
    Battle,
    Other,
};

