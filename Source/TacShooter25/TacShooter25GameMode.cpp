// Copyright Epic Games, Inc. All Rights Reserved.

#include "TacShooter25GameMode.h"
#include "TacShooter25PlayerController.h"
#include "TacShooter25Character.h"
#include "UObject/ConstructorHelpers.h"

ATacShooter25GameMode::ATacShooter25GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATacShooter25PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}