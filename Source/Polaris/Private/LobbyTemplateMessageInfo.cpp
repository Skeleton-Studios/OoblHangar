#include "LobbyTemplateMessageInfo.h"

FLobbyTemplateMessageInfo::FLobbyTemplateMessageInfo() {
    this->MessageId = 0;
    this->Category = ELobbyTemplateMessageCategory::Favorite;
    this->SubCategory = ELobbyTemplateMessageSubCategory::None;
    this->ReleaseVersion = 0;
}

