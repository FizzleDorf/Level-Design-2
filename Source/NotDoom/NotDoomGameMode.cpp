// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "NotDoomGameMode.h"
#include "NotDoomHUD.h"
#include "NotDoomCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANotDoomGameMode::ANotDoomGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANotDoomHUD::StaticClass();
}
