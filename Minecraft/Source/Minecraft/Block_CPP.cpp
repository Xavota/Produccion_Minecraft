// Fill out your copyright notice in the Description page of Project Settings.


#include "Block_CPP.h"
#include "Containers/EnumAsByte.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "CollisionQueryParams.h"
#include "DrawDebugHelpers.h"

#include <string>

// Sets default values
ABlock_CPP::ABlock_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("CubeMesh");
	CubeMesh->SetupAttachment(RootComponent);

	CubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

}

// Called when the game starts or when spawned
void ABlock_CPP::BeginPlay()
{
	TArray<ABlock_CPP*> arrays;
	LanzarRayo(arrays);
	//GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Green, ("OnBeginPlay(): " + std::string(TCHAR_TO_UTF8(*GetName())) + " = " + std::to_string(arrays.Num())).c_str());


	if (arrays.Num() == 6)
	{
		CubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
		//GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Blue, ("     OnBeginPlay(): " + std::string(TCHAR_TO_UTF8(*GetName())) + " = Si").c_str());
	}
	else
	{
		CubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
		//GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Blue, ("     OnBeginPlay(): " + std::string(TCHAR_TO_UTF8(*GetName())) + " = No").c_str());
	}

	for (int i = 0; i < arrays.Num(); i++)
	{
		arrays[i]->UpdateAdjacents();
	}
}

void ABlock_CPP::LanzarRayo(TArray<ABlock_CPP*>& arrays)
{
	for (int i = 0; i < 6; i++)
	{
		FVector Loc = GetActorLocation();
		FHitResult Hit;

		float distance = 75;

		FVector Start = Loc;
		FVector End = Loc + (FVector(i == 0 ? distance : (i == 1 ? -distance : 0), i == 2 ? distance : (i == 3 ? -distance : 0), i == 4 ? distance : (i == 5 ? -distance : 0)));

		FCollisionQueryParams TraceParams;

		bool hited = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TraceParams);

		/*DrawDebugLine(
			GetWorld(),
			Start,
			End,
			FColor(255, 0, 0),
			false, 10, 0,
			1
		);*/

		auto blocks = Cast<ABlock_CPP>(Hit.Actor);
		if (blocks != nullptr)
		{
			arrays.Add(blocks);
		}
	}
}

void ABlock_CPP::UpdateAdjacents()
{
	TArray<ABlock_CPP*> arrays;
	LanzarRayo(arrays);
	//GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Red, ("OnUpdate(): " + std::string(TCHAR_TO_UTF8(*GetName())) + " = " + std::to_string(arrays.Num())).c_str());

	if (arrays.Num() == 6)
	{
		CubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
		//GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Black, ("     OnUpdate(): " + std::string(TCHAR_TO_UTF8(*GetName())) + " = Si").c_str());
	}
	else
	{
		CubeMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
		//GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Black, ("     OnUpdate(): " + std::string(TCHAR_TO_UTF8(*GetName())) + " = No").c_str());
	}
}

void ABlock_CPP::Hitted(float DeltaTime)
{
	Life -= DeltaTime;
	if (Life <= 0)
		Breaked();
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Blue, "Hitted");
}

void ABlock_CPP::Unhitted()
{
	Life = MaxLife;
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, "Unhitted");
}

void ABlock_CPP::Interacted()
{
	
}

void ABlock_CPP::Breaked()
{
	CubeMesh->SetVisibility(false);
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, "Destroyed");

	isAlive = false;

	SetActorLocation({1000, 1000, 1000});
	//GetWorld()->DestroyActor(this);
	//Destroy();
}

// Called every frame
/*void ABlock_CPP::Tick(float DeltaTime)
{
	//Super::Tick(DeltaTime);
}*/

