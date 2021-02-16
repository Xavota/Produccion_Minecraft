// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block_CPP.generated.h"

UENUM()
enum eBLOCK_TYPE
{
	SOLID UMETA(DisplayName = "SOLID"),
	LIQUID   UMETA(DisplayName = "LIQUID")
};

UCLASS()
class MINECRAFT_API ABlock_CPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlock_CPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlockInfo)
		TEnumAsByte<eBLOCK_TYPE> eBlockType = SOLID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BlockInfo)
		bool HasGravity = false;

	UPROPERTY()
		class UStaticMeshComponent* CubeMesh;

};
