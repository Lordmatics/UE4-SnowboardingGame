// Fill out your copyright notice in the Description page of Project Settings.

#include "Snowboarding.h"
#include "Snowboard.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ASnowboard::ASnowboard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MyRoot"));
	RootComponent = MyRoot;

	MySnowboard = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MySnowboard"));
	MySnowboard->SetupAttachment(MyRoot);
}

// Called when the game starts or when spawned
void ASnowboard::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASnowboard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

