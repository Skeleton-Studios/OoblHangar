#include "DebugAvatarItemCheckLibrary.h"

UDebugAvatarItemCheckLibrary::UDebugAvatarItemCheckLibrary() {
}

FString UDebugAvatarItemCheckLibrary::GetAllInvalidMessage(const int32 error_release_version, const TMap<int32, FAvatarItemInvalidData>& invalid_datas) {
    return TEXT("");
}

bool UDebugAvatarItemCheckLibrary::CheckHasInvalidItemData(UAvatarItemDataRepository* repository, TMap<int32, FAvatarItemInvalidData>& invalid_datas) {
    return false;
}


