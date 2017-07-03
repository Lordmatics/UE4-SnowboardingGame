// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "SnowboardingCharacter.generated.h"

UCLASS()
class SNOWBOARDING_API ASnowboardingCharacter : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly, Category = "Snowboard")
		USceneComponent* MyRoot;

	UPROPERTY(VisibleDefaultsOnly, Category = "Snowboard")
		class UStaticMeshComponent* MyCharacter;

	UPROPERTY(EditAnywhere, Category = "Snowboard")
		TSubclassOf<class ASnowboard> SnowboardClass;

private:
	void SpawnBoard();

	UFUNCTION()
		void MoveForward(float Val);

	UFUNCTION()
		void MoveRight(float Val);
public:
	// Sets default values for this character's properties
	ASnowboardingCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
