// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "EpicZombieSurvivalGameMode.h"
#include "EpicZombieSurvivalHUD.h"
#include "EpicZombieSurvivalCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEpicZombieSurvivalGameMode::AEpicZombieSurvivalGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AEpicZombieSurvivalHUD::StaticClass();
}
