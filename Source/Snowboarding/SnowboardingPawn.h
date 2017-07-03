// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "WheeledVehicle.h"
#include "SnowboardingPawn.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UInputComponent;
UCLASS(config=Game)
class ASnowboardingPawn : public AWheeledVehicle
{
	GENERATED_BODY()

	/** Spring arm that will offset the camera */
	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArm;

	/** Camera component that will be our viewpoint */
	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* Camera;
	
public:
	ASnowboardingPawn();

	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

	virtual void Tick(float Delta) override;
protected:
	virtual void BeginPlay() override;

public:

	/** Handle pressing forwards */
	void MoveForward(float Val);

	/** Handle pressing right */
	void MoveRight(float Val);

	static const FName LookUpBinding;
	static const FName LookRightBinding;

private:

public:
	/** Returns SpringArm subobject **/
	FORCEINLINE USpringArmComponent* GetSpringArm() const { return SpringArm; }
	/** Returns Camera subobject **/
	FORCEINLINE UCameraComponent* GetCamera() const { return Camera; }
};
