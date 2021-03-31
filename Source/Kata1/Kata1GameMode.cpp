// Copyright Epic Games, Inc. All Rights Reserved.

#include "Kata1GameMode.h"
#include "Kata1Character.h"
#include "UObject/ConstructorHelpers.h"

AKata1GameMode::AKata1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
