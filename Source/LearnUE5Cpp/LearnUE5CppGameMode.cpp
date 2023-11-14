// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearnUE5CppGameMode.h"
#include "LearnUE5CppCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALearnUE5CppGameMode::ALearnUE5CppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
