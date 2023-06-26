// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzlePlatformGameInstance.h"

UPuzzlePlatformGameInstance::UPuzzlePlatformGameInstance(const FObjectInitializer& ObjectInitializer)
{
	UE_LOG(LogTemp, Warning, TEXT("ConstructorInitialized"));
}

void UPuzzlePlatformGameInstance::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("InitInitialized"));
}

void UPuzzlePlatformGameInstance::HostServer()
{
	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;
	
	Engine->AddOnScreenDebugMessage(0, 5, FColor::Green, TEXT("Hosting"));

	UWorld* World = GetWorld();
	if (!ensure(Engine != nullptr)) return;

	World->ServerTravel("/Game/ThirdPerson/Maps/ThirdPersonMap?listen");
}

void UPuzzlePlatformGameInstance::JoinServer(const FString& Address)
{
	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;
	Engine->AddOnScreenDebugMessage(0, 5, FColor::Green, FString::Printf(TEXT("Joining %s"), *Address));

	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	PlayerController->ClientTravel(*Address, ETravelType::TRAVEL_Absolute);
}