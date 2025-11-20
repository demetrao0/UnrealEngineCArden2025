// Fill out your copyright notice in the Description page of Project Settings.


#include "TransformMidifierActor.h"

// Sets default values
ATransformMidifierActor::ATransformMidifierActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ATransformMidifierActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	DrawDSphere();
	
}

// Called when the game starts or when spawned
void ATransformMidifierActor::BeginPlay()
{
	Super::BeginPlay();
	//Vincular al actor seleccionado con el transform
	if (TargetActor)
	{
		NewTransform = TargetActor -> GetActorTransform();
	}
	else {
		TargetActor = nullptr;
	}
	//Inicializar indice de posicion
	if (Positions.Num() > 0)
	{
		CurrentPositionIndex = 0;
		MoveToNextPosition();
	}
	
}

// Called every frame
void ATransformMidifierActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//ModifyTargetTransform(DeltaTime);
	
	if(Positions.Num() == 0 || !TargetActor)
	{
		return;	
	}

	FVector CurrentPosition = TargetActor->GetActorLocation();
	FVector TargetPosition = Positions[CurrentPositionIndex];
	//Move Toward Target Position

	FVector Direction = (TargetPosition - CurrentPosition).GetSafeNormal();
	FVector NewPosition = CurrentPosition + Direction * 100 * DeltaTime;

	TargetActor->SetActorLocation(NewPosition);

	//Check if reached Target Position
	if (FVector::Dist(NewPosition, TargetPosition) <= 100.0f)
	{
		ChangeMaterial();
		CurrentPositionIndex++;
		if (CurrentPositionIndex >= Positions.Num()) {
			CurrentPositionIndex = 0;
		}
	}
}

void ATransformMidifierActor::ModifyTargetTransform(float DeltaTime)
{

	//if (TargetActor)
	//{
	//	TargetActor->SetActorTransform(NewTransform);
	//}
	
	/*if (Positions.Num() > 0)
	{
		return;
	}

	FVector CurrentPosition = TargetActor->GetActorLocation();
	FVector TargetPosition = Positions[CurrentPositionIndex];

	//Move Toward Target Position
	FVector Direction = (TargetPosition - CurrentPosition).GetSafeNormal();
	FVector NewPosition = CurrentPosition + Direction * 100 * DeltaTime;
	TargetActor->SetActorLocation(NewPosition);

	//Check if reached Target Position
	if (FVector::Dist(NewPosition, TargetPosition) <= 10.0f)
	{
		CurrentPositionIndex++;
		ChangeMaterial();
		if (CurrentPositionIndex >= Positions.Num()) {
			CurrentPositionIndex = 0;
		}
	}*/

}

void ATransformMidifierActor::MoveToNextPosition()
{
	if (TargetActor && Positions.IsValidIndex(CurrentPositionIndex))
	{
		FVector TargetPosition = Positions[CurrentPositionIndex];
		TargetActor->SetActorLocation(TargetPosition);
	}

}

void ATransformMidifierActor::ChangeMaterial()
{

	if (TargetActor && Materials.IsValidIndex(CurrentPositionIndex)) {
		UStaticMeshComponent* MeshComponent = Cast<UStaticMeshComponent>(
			TargetActor->GetComponentByClass(UStaticMeshComponent::StaticClass()));
		if (MeshComponent) {
			MeshComponent->SetMaterial(0, Materials[CurrentPositionIndex]);
		}
	}
	
}

void ATransformMidifierActor::DrawDSphere() const
{

	for(const FVector& Position : Positions)
	{
		DrawDebugSphere(
			GetWorld(),
			Position,
			50.0f,
			12,
			FColor::Green,
			false,
			-1.0f,
			0,
			2.0f
		);
	}


}

