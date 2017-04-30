// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "GoldenEye.h"
#include "GoldenEyeGameMode.h"
#include "GoldenEyeHUD.h"
#include "GoldenEyeCharacter.h"

AGoldenEyeGameMode::AGoldenEyeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGoldenEyeHUD::StaticClass();
}
