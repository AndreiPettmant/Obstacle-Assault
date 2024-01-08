// Fill out your copyright notice in the Description page of Project Settings.


#include "ResetPlayerPosition.h"
#include "DrawDebugHelpers.h"
// #include "GameFramework/PlayerStart.h"
// #include "GameFramework/GameModeBase.h"

#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, text)

AResetPlayerPosition::AResetPlayerPosition()
{
    OnActorBeginOverlap.AddDynamic(this, &AResetPlayerPosition::OnOverlapBegin);
}

void AResetPlayerPosition::BeginPlay()
{
    Super::BeginPlay();
    DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Red, true, -1, 0, 5);
}

void AResetPlayerPosition::OnOverlapBegin(class AActor* overlappedActor, class AActor* otherActor)
{
    if(otherActor && (otherActor != this))
    {
        FVector playerStartLocation = playerStart->GetActorLocation();
        FRotator playerStartRotation = playerStart->GetActorRotation();

        otherActor->SetActorLocationAndRotation(playerStartLocation, playerStartRotation);
    }
}