// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UE4EnvironmentGameMode.h"
#include "UE4EnvironmentPawn.h"
#include "UE4EnvironmentHud.h"

AUE4EnvironmentGameMode::AUE4EnvironmentGameMode()
{
	DefaultPawnClass = AUE4EnvironmentPawn::StaticClass();
	HUDClass = AUE4EnvironmentHud::StaticClass();
}
