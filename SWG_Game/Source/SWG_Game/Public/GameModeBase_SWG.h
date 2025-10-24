// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameModeBase_SWG.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class SWG_GAME_API AGameModeBase_SWG : public AGameModeBase
{
	GENERATED_BODY()
	
public:
    AGameModeBase_SWG();

    virtual void StartPlay() override;
    virtual void BeginPlay() override;

    virtual void PostLogin(APlayerController* NewPlayer) override;
    virtual void Logout(AController* Exiting) override;
};
