// Copyright Epic Games, Inc. All Rights Reserved.

#include "SGS3GameMode.h"
#include "SGS3PlayerController.h"
#include "SGS3Character.h"
#include "UObject/ConstructorHelpers.h"

ASGS3GameMode::ASGS3GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASGS3PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}