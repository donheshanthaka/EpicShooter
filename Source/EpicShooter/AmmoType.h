#pragma once

UENUM(BlueprintType)
enum class EAmmoType : uint8 {
	EAT_9mm UMETA(DisplayName = "9mm"),
	EAT_AR UMETA(DisplayName = "Assult Rifle"),

	EAT_MAX UMETA(DisplayName = "DefaultMAX")
};