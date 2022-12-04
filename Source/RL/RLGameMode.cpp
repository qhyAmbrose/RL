// Copyright Epic Games, Inc. All Rights Reserved.

#include "RLGameMode.h"
#include "RLPawn.h"
#include "RLHud.h"

ARLGameMode::ARLGameMode()
{
	DefaultPawnClass = ARLPawn::StaticClass();
	HUDClass = ARLHud::StaticClass();
}
