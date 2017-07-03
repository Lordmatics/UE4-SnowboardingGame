// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Snowboard.generated.h"

UCLASS()
class SNOWBOARDING_API ASnowboard : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleDefaultsOnly, Category = "Snowboard")
		USceneComponent* MyRoot;

	UPROPERTY(VisibleDefaultsOnly, Category = "Snowboard")
		class UStaticMeshComponent* MySnowboard;
public:	
	// Sets default values for this actor's properties
	ASnowboard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
