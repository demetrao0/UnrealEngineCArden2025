// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformActor.h"
#include "Components/BoxComponent.h"

// Sets default values
APlatformActor::APlatformActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	//Create and set up static mesh component
	PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
	RootComponent = PlatformMesh;

	//Initialize variables
	MovementSpeed = 200.f;
	bIsMoving = true;
	MovementAmplitut = 500.f;

	
	//Establecer collision
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->SetBoxExtent(FVector(1.f, 1.f, 1.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &APlatformActor::OnOverlapBegin);
}

// Called when the game starts or when spawned
void APlatformActor::BeginPlay()
{
	Super::BeginPlay();
	InitialLocation = GetActorLocation();
	ChageMaterial(PlatformMaterial);
	
}

// Called every frame
void APlatformActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector NewLocation = GetActorLocation();
	float DeltaMovement = MovementSpeed * DeltaTime;

	//validar el movimiento en la direccion deseada
	if (bIsMoving)
	{
		NewLocation.Y += DeltaMovement;
		if (NewLocation.Y >= InitialLocation.Y + MovementAmplitut)
		{
			bIsMoving = false;
		}

	}
	else {
		NewLocation.Y -= DeltaMovement;
		if (NewLocation.Y <= InitialLocation.Y - MovementAmplitut)
		{
			bIsMoving = true;
		}
	}

	SetActorLocation(NewLocation);
	DrawDebugLine(GetWorld(), InitialLocation, NewLocation, FColor::Green, false, -1.f, 0, 5.f);

}

void APlatformActor::ChageMaterial(UMaterialInterface* NewMaterial)
{
	if (NewMaterial && PlatformMesh) {
		PlatformMesh->SetMaterial(0, NewMaterial);
	}

}

void APlatformActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherActor && (OtherActor != this) && OtherComp) {
		
		Destroy();
	}

}

