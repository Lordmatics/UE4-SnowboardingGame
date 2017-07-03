// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Snowboarding.h"
#include "SnowboardingHud.h"
#include "SnowboardingPawn.h"
#include "WheeledVehicle.h"
#include "RenderResource.h"
#include "Shader.h"
#include "Engine/Canvas.h"
#include "Engine/Font.h"
#include "CanvasItem.h"
#include "Engine.h"

#define LOCTEXT_NAMESPACE "VehicleHUD"

ASnowboardingHud::ASnowboardingHud()
{
	static ConstructorHelpers::FObjectFinder<UFont> Font(TEXT("/Engine/EngineFonts/RobotoDistanceField"));
	HUDFont = Font.Object;
}

void ASnowboardingHud::DrawHUD()
{
	Super::DrawHUD();

	//// Calculate ratio from 720p
	//const float HUDXRatio = Canvas->SizeX / 1280.f;
	//const float HUDYRatio = Canvas->SizeY / 720.f;

	//// Get our vehicle so we can check if we are in car. If we are we don't want onscreen HUD
	//ASnowboardingPawn* Vehicle = Cast<ASnowboardingPawn>(GetOwningPawn());
	//if ((Vehicle != nullptr) && (Vehicle->bInCarCameraActive == false))
	//{
	//	FVector2D ScaleVec(HUDYRatio * 1.4f, HUDYRatio * 1.4f);

	//	// Speed
	//	FCanvasTextItem SpeedTextItem(FVector2D(HUDXRatio * 805.f, HUDYRatio * 455), Vehicle->SpeedDisplayString, HUDFont, FLinearColor::White);
	//	SpeedTextItem.Scale = ScaleVec;
	//	Canvas->DrawItem(SpeedTextItem);

	//	// Gear
	//	FCanvasTextItem GearTextItem(FVector2D(HUDXRatio * 805.f, HUDYRatio * 500.f), Vehicle->GearDisplayString, HUDFont, Vehicle->bInReverseGear == false ? Vehicle->GearDisplayColor : Vehicle->GearDisplayReverseColor);
	//	GearTextItem.Scale = ScaleVec;
	//	Canvas->DrawItem(GearTextItem);
	//}
	
}


#undef LOCTEXT_NAMESPACE
