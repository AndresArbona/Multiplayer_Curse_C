// Copyright Epic Games, Inc. All Rights Reserved.

#include "Multiplayer_Curse_CGameMode.h"
#include "Multiplayer_Curse_CCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayer_Curse_CGameMode::AMultiplayer_Curse_CGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
