// Copyright Epic Games, Inc. All Rights Reserved.

#include "PannerGameMode.h"
#include "PannerHUD.h"
#include "PannerCharacter.h"
#include "UObject/ConstructorHelpers.h"

APannerGameMode::APannerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APannerHUD::StaticClass();
}
