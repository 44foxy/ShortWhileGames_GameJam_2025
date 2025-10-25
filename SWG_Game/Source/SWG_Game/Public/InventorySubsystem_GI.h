// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "InventorySubsystem_GI.generated.h"


USTRUCT(BlueprintType)
struct FInventorySpace
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	TObjectPtr<AActor> Item = nullptr;

	UPROPERTY(EditAnywhere)
	int count = 0;
};

/**
 * 
 */
UCLASS()
class SWG_GAME_API UInventorySubsystem_GI : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	/** Implement this for deinitialization of instances of the system */
	virtual void Deinitialize() override;

	
};
