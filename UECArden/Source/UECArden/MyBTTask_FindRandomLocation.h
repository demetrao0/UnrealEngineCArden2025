// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "MyBTTask_FindRandomLocation.generated.h"

/**
 * 
 */
UCLASS()
class UECARDEN_API UMyBTTask_FindRandomLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	UMyBTTask_FindRandomLocation(FObjectInitializer const& ObjectInitializer);

	virtual EBTNodeResult::Type
		ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;


UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI", meta=(AllowedPrivateAccess= "true"))
float SearchRadius = 1500.0f;

};
