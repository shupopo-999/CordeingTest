// Copyright Epic Games, Inc. All Rights Reserved.

#include "CordeingTestGameMode.h"
#include "CordeingTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACordeingTestGameMode::ACordeingTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
