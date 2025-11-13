// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorTest.h"
#include "Engine/Engine.h"

// Sets default values
AMyActorTest::AMyActorTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyFloatVariable = 50.0f;
	edad = 27;
	esInstructor = false;
	nombre = "Josep";
	DemostrateFundamentals();
}

// Called when the game starts or when spawned
void AMyActorTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActorTest::DemostrateFundamentals()
{
	//Operadores aritmeticos
	int32 suma = edad + 5;
	float product = MyFloatVariable * 2.5f;

	//Estructuras de control
	if (esInstructor)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Eres un instructor"));
		
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No eres un instructor"));
		
	}
	//Bucle o ciclo
	for (int32 i = 0; i < 5; i++)
	{
		FString DebugMsg = FString::Printf(TEXT("loop interation: %d"), i );
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, DebugMsg);
	}

	//Bucle while
	int32 counter = 0;
	while (counter < 3)
	{
		FString WhileMsg = FString::Printf(TEXT("While loop iteration: %d"), counter);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, WhileMsg);
		counter++;
	}
}

