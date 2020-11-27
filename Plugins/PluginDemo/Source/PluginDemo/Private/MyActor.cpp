// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	NewLocation = FVector(-270.0f, 0.0f, 100.0f);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	totalTime += DeltaTime;

	NewLocation += FVector(20,20,20);
	if (USceneComponent * rootComponent = GetRootComponent())
	{
		if (APawn * playerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0))
		{
			rootComponent->SetWorldLocation(NewLocation);
			//FRotator lookat = UKismetMathLibrary::FindLookAtRotation(rootComponent->GetComponentLocation(), playerPawn->GetActorLocation());
			//rootComponent->SetWorldRotation(lookat);
		}
	}

}

