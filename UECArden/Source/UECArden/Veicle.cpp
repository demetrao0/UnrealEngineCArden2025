// Fill out your copyright notice in the Description page of Project Settings.


#include "Veicle.h"

// Sets default values
AVeicle::AVeicle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Speed = 100.0f;

}

// Called when the game starts or when spawned
void AVeicle::BeginPlay()
{
	Super::BeginPlay();
	Move();
}

// Called every frame
void AVeicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVeicle::Move()
{
	UE_LOG(LogTemp, Warning, TEXT("The veicle speed is "));
}
