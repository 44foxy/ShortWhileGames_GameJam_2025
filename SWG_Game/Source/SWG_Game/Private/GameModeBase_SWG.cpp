// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModeBase_SWG.h"
#include "Pawn_SWG.h"

AGameModeBase_SWG::AGameModeBase_SWG()
{
    bStartPlayersAsSpectators = false;
}

void AGameModeBase_SWG::StartPlay()
{
    Super::StartPlay();

    UE_LOG(LogTemp, Warning, TEXT("GameModeBase: StartPlay called"));
}

void AGameModeBase_SWG::BeginPlay()
{
	Super::BeginPlay();
}

void AGameModeBase_SWG::PostLogin(APlayerController* NewPlayer)
{
    Super::PostLogin(NewPlayer);

    if (!NewPlayer->GetPawn())
    {
        RestartPlayer(NewPlayer);
    }
}

void AGameModeBase_SWG::Logout(AController* Exiting)
{

}
