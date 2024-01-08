// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "ResetPlayerPosition.generated.h"

/**
 * 
 */
UCLASS()
class OBSTACLEASSAULT_API AResetPlayerPosition : public ATriggerBox
{
	GENERATED_BODY()

protected:
	
	virtual void BeginPlay() override;

public:

	AResetPlayerPosition();

	UFUNCTION()
	void OnOverlapBegin(class AActor* overlappedActor, class AActor* otherActor);
	UPROPERTY(EditAnyWhere, Category="Start Portal")
	AActor* playerStart;

};


