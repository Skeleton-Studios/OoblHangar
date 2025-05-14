#include "LobbyTemplateMessage.h"

ULobbyTemplateMessage::ULobbyTemplateMessage() {
    this->SubCategoryDataAsset = NULL;
}

FString ULobbyTemplateMessage::GetLocalizedText(int32 template_id, int32 template_sub_id) {
    return TEXT("");
}

ULobbyTemplateMessage* ULobbyTemplateMessage::GetLobbyTemplateMessage() {
    return NULL;
}


