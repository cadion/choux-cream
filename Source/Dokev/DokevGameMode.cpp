// Copyright Epic Games, Inc. All Rights Reserved.

#include "DokevGameMode.h"
#include "DokevCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADokevGameMode::ADokevGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
