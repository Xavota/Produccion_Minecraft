// Fill out your copyright notice in the Description page of Project Settings.


#include "GlobalTest_CPP.h"
#include "Block_CPP.h"

// Sets default values
AGlobalTest_CPP::AGlobalTest_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGlobalTest_CPP::BeginPlay()
{
	Super::BeginPlay();
	
	for (int i = 0; i < 10; i++)
	{
		GetWorld()->SpawnActor(ABlock_CPP::StaticClass(), new FVector{0,0,0}, new FRotator{0,0,0});
	}
}

// Called every frame
void AGlobalTest_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

