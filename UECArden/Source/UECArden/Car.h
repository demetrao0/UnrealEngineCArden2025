// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Veicle.h"
#include "Car.generated.h"

UENUM()
enum class ECarBrand
{
	Toyota UMETA(DisplayName = "Toyota"),
	Ford UMETA(DisplayName = "Ford"),
	Honda UMETA(DisplayName = "Honda"),
	Chevrolet UMETA(DisplayName = "Chevrolet"),
	BMW UMETA(DisplayName = "BMW"),
	Mercedes UMETA(DisplayName = "Mercedes"),
	Audi UMETA(DisplayName = "Audi"),
	Volkswagen UMETA(DisplayName = "Volkswagen"),
};

/**
 * 
 */
UCLASS()
class UECARDEN_API ACar : public AVeicle
{
	GENERATED_BODY()

public:
	ACar();
	

protected:
	virtual void BeginPlay() override;


public:
	//Called every frame
virtual void Tick(float DeltaTime) override;


public:
	virtual void Move() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	FString CarModel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	ECarBrand CarBrand;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	FString LicensePlate;


};
