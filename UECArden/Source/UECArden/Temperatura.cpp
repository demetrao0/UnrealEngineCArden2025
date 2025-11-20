// Fill out your copyright notice in the Description page of Project Settings.


#include "Temperatura.h"

// Sets default values
ATemperatura::ATemperatura()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TemperatureCelsius = 25.0f;	// Valor predeterminado de temperatura en Celsius
	


}

// Called when the game starts or when spawned
void ATemperatura::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATemperatura::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float ATemperatura::GetTemperatureFarenheit() const
{
	return (TemperatureCelsius * 9.0f / 5.0f) + 32.0f;
}

float ATemperatura::CalculateTemperatureDifference(float Temp1, float Temp2) 
{
	return FMath::Abs(Temp1 - Temp2);
}

float ATemperatura::CalculateStatikTemperatureDifference(float Temp1, float Temp2) 
{
	return FMath::Abs(Temp1 - Temp2);
}

float ATemperatura::ConvertKelvinToCelsius(float Kelvin)
{
	return Kelvin - 273.15f;

}

float ATemperatura::CalculateAverageTemperature(float Temp1, float Temp2)
{

	return  (Temp1 + Temp2) / 2.0f;

}



