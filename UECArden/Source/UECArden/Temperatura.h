// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Temperatura.generated.h"

UCLASS()
class UECARDEN_API ATemperatura : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATemperatura();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
	//Metodo para obtener a temperatura em Fahrenheit
	UFUNCTION(BlueprintCallable, Category = "Temperature")
	float GetTemperatureFarenheit() const;

	UFUNCTION(BlueprintCallable, Category = "Temperature")
	float CalculateTemperatureDifference(float Temp1, float Temp2);

	UFUNCTION(BlueprintPure, Category = "Temperature")
	static float CalculateStatikTemperatureDifference(float Temp1, float Temp2);

	UFUNCTION(BlueprintPure, Category = "Temperature")
	static float ConvertKelvinToCelsius(float Kelvin);

	UFUNCTION(BlueprintPure, Category = "Temperature")
	static float CalculateAverageTemperature(float Temp1, float Temp2);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Temperature")
	void OnTemperatureCheck(float CurrentTemperature);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Variable Temperatura

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Temperature")
	float TemperatureCelsius;

	

};
