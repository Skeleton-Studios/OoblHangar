#include "PolarisDateTimeBlueprintLibrary.h"

UPolarisDateTimeBlueprintLibrary::UPolarisDateTimeBlueprintLibrary() {
}

bool UPolarisDateTimeBlueprintLibrary::IsDstAtLocalTime(const FDateTime& DateTime) {
    return false;
}

FString UPolarisDateTimeBlueprintLibrary::GetLocalDateTimeFormat(bool HasYear) {
    return TEXT("");
}

FString UPolarisDateTimeBlueprintLibrary::GetFormatedLocalTimeSkeleton(const FDateTime& UtcDateTime) {
    return TEXT("");
}

FString UPolarisDateTimeBlueprintLibrary::GetFormatedLocalTime(const FDateTime& UtcDateTime) {
    return TEXT("");
}

FString UPolarisDateTimeBlueprintLibrary::GetDateTimeFormatString(const FDateTime& DateTime, const FString& CustomPattern) {
    return TEXT("");
}


