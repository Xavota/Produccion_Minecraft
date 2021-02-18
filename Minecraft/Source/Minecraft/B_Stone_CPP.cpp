// Fill out your copyright notice in the Description page of Project Settings.


#include "B_Stone_CPP.h"

AB_Stone_CPP::AB_Stone_CPP()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/Mara/Meshes/StoneBlock.StoneBlock"));

	if (BlockAsset.Succeeded())
	{
		CubeMesh->SetStaticMesh(BlockAsset.Object);
	}

	MaxLife = 3;
	Life = 3;
}