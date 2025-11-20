// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterInput.h"
#include "GameFramework/PlayerController.h"
#include "Engine/LocalPlayer.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "InputTriggers.h"





// Sets default values
AMyCharacterInput::AMyCharacterInput()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacterInput::BeginPlay()
{
	Super::BeginPlay();
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		if (ULocalPlayer* LP = PC->GetLocalPlayer())
		{
			if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LP->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
			{
				if (DefaultMappingContext)
				{
					Subsystem->AddMappingContext(DefaultMappingContext, 0);
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("DefaultMappingContext is null in %s"), *GetName());	
				}
			}
		}
	}
	
}

// Called every frame
void AMyCharacterInput::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacterInput::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		
		if (InteractAction) {

			EIC->BindAction(InteractAction, ETriggerEvent::Started, this, &AMyCharacterInput::Interact);

			EIC->BindAction(InteractAction, ETriggerEvent::Triggered, this, &AMyCharacterInput::Interact);

		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("InteractAction is null in %s"), *GetName());
		}

	}
	else {
		UE_LOG(LogTemp, Error, TEXT("PlayerInputComponent is not UEnhancedInputComponent in %s"), *GetName());
	}


}

void AMyCharacterInput::Interact(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Log, TEXT("Interact!"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Interact!"));
}

