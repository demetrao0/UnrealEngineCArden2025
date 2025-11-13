// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Veicle.generated.h"

UCLASS()
class UECARDEN_API AVeicle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVeicle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	virtual void Move();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Veicle")
	float Speed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Veicle")
	FString VeicleName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Veicle")
	float Fuel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Veicle")
	int32 Wheels;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Veicle")
	bool bIsElectric;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Veicle")
	FColor VeicleColor;
	

};
