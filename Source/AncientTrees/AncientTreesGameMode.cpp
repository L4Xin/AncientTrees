// Copyright Epic Games, Inc. All Rights Reserved.

#include "AncientTreesGameMode.h"
#include "AncientTreesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAncientTreesGameMode::AAncientTreesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
