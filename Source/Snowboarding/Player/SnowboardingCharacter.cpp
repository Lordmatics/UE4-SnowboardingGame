// Fill out your copyright notice in the Description page of Project Settings.

#include "Snowboarding.h"
#include "Snowboarding/Player/SnowboardingCharacter.h"
#include "Snowboarding/Player/Snowboard.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"


// Sets default values
ASnowboardingCharacter::ASnowboardingCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MyRoot"));
	RootComponent = MyRoot;

	MyCharacter = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyCharacter"));
	MyCharacter->SetupAttachment(MyRoot);
}

// Called when the game starts or when spawned
void ASnowboardingCharacter::BeginPlay()
{
	Super::BeginPlay();

	SpawnBoard();
}

// Called every frame
void ASnowboardingCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASnowboardingCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASnowboardingCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASnowboardingCharacter::MoveRight);
}

void ASnowboardingCharacter::SpawnBoard()
{
	UWorld* const World = GetWorld();
	if (World == nullptr || SnowboardClass == nullptr) return;
	ASnowboard* Board = World->SpawnActor<ASnowboard>(SnowboardClass);
	if (Board == nullptr) return;
	Board->AttachToActor(this, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
}

void ASnowboardingCharacter::MoveForward(float Value)
{
	//GLog->Log("Moving Forward");
}

void ASnowboardingCharacter::MoveRight(float Value)
{
	//GLog->Log("Moving Right");
}