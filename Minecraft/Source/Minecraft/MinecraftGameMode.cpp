// Copyright Epic Games, Inc. All Rights Reserved.

#include "MinecraftGameMode.h"
#include "MinecraftHUD.h"
#include "MinecraftCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMinecraftGameMode::AMinecraftGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMinecraftHUD::StaticClass();
}
