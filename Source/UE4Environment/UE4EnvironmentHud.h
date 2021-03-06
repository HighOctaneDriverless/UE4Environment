// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UE4EnvironmentHud.generated.h"

UCLASS(config = Game)
class AUE4EnvironmentHud : public AHUD
{
	GENERATED_BODY()

public:
	AUE4EnvironmentHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
