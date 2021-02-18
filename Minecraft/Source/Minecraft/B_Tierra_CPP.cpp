// Fill out your copyright notice in the Description page of Project Settings.


#include "B_Tierra_CPP.h"


AB_Tierra_CPP::AB_Tierra_CPP()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/DirtBlock.DirtBlock"));

	if (BlockAsset.Succeeded())
	{
		CubeMesh->SetStaticMesh(BlockAsset.Object);
	}

	MaxLife = 1;
	Life = 1;
}
