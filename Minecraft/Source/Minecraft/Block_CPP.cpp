// Fill out your copyright notice in the Description page of Project Settings.


#include "Block_CPP.h"
#include "Containers/EnumAsByte.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABlock_CPP::ABlock_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("CubeMesh");
	CubeMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/DirtBlock.DirtBlock"));

	if (BlockAsset.Succeeded())
	{
		CubeMesh->SetStaticMesh(BlockAsset.Object);
	}

	CubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

}

// Called when the game starts or when spawned
void ABlock_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlock_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

