// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Snowboarding.h"
#include "SnowboardingWheelRear.h"

USnowboardingWheelRear::USnowboardingWheelRear()
{
	ShapeRadius = 35.f;
	ShapeWidth = 10.0f;
	bAffectedByHandbrake = true;
	SteerAngle = 0.f;
}
