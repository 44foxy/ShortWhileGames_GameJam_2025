// Fill out your copyright notice in the Description page of Project Settings.


#include "SWG_Pawn.h"

// Sets default values
ASWG_Pawn::ASWG_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASWG_Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASWG_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASWG_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

