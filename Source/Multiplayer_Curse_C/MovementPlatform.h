// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovementPlatform.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYER_CURSE_C_API AMovementPlatform : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	AMovementPlatform();

	void AddActiveTrigger();
	void RemoveActiveTrigger();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;


	UPROPERTY( EditAnywhere )
	float PlatformSpeed = 20;
	UPROPERTY( EditAnywhere, Meta = (MakeEditWidget = true) )
	FVector PlatformTargetLocation;


private:
	FVector GlobalPlatformStartLocation;
	FVector GlobalPlatformTargetLocation;

	UPROPERTY(EditAnywhere)
	int ActiveTriggers = 1;
};
