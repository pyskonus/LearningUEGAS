// Copyright Epic Games, Inc. All Rights Reserved.

#include "ASUGameMode.h"
#include "ASUCharacter.h"
#include "UObject/ConstructorHelpers.h"

AASUGameMode::AASUGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
