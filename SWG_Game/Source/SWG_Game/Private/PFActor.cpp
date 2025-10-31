// Fill out your copyright notice in the Description page of Project Settings.


#include "PFActor.h"

// Sets default values
APFActor::APFActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APFActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APFActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

