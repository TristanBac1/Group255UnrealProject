// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Group255UnrealGameMode.h"
#include "Group255UnrealPlayerController.h"
#include "Group255UnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGroup255UnrealGameMode::AGroup255UnrealGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGroup255UnrealPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}