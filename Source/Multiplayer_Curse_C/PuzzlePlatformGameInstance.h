// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PuzzlePlatformGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYER_CURSE_C_API UPuzzlePlatformGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UPuzzlePlatformGameInstance(const FObjectInitializer& ObjectInitializer);

	virtual void Init();

	UFUNCTION(Exec)
	void HostServer();
	
	UFUNCTION(Exec)
	void JoinServer(const FString& Address);
};
