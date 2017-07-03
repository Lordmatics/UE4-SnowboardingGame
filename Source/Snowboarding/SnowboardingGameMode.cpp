// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Snowboarding.h"
#include "SnowboardingGameMode.h"
#include "SnowboardingPawn.h"
#include "SnowboardingHud.h"

ASnowboardingGameMode::ASnowboardingGameMode()
{
	DefaultPawnClass = ASnowboardingPawn::StaticClass();
	HUDClass = ASnowboardingHud::StaticClass();
}
