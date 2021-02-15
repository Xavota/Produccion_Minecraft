// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include<vector>
#include "mundo.generated.h"
using std::vector;
UCLASS()
class MINECRAFT_API Amundo : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	Amundo();
	UPROPERTY(EditAnywhere)
		float sizex;
	UPROPERTY(EditAnywhere)
		float sizey;
	UPROPERTY(EditAnywhere)
		float sizez;
	UPROPERTY(EditAnywhere)
		float separacion;
	UPROPERTY(EditAnywhere)
		float seed;
	UPROPERTY(EditAnywhere)
		float depth;
	UPROPERTY(EditAnywhere)
		float niosines;
	UPROPERTY(EditAnywhere)
		float lenght;
	UPROPERTY(EditAnywhere)
		float reacomodar;
	UPROPERTY(EditAnywhere)
		float afinidad;
	UPROPERTY(EditAnywhere)
		float numofcuads;
	UPROPERTY(EditAnywhere)
		TArray<TSubclassOf<AActor>> capas;
	UPROPERTY(EditAnywhere)
		TArray<float> tcapas;
	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> awa;
	UPROPERTY(EditAnywhere)
		int awalvl;
	vector<vector<int>> vectors;
	void makevektors();
	//UPROPERTY()
		//TArray<float> terrain;
	vector<float> terrain;
	float ant;
	void perilnoise(vector<float>& nums, int d);
	vector<vector<float>> perilnoise2d(int x, int d);
	vector<vector<float>> terreno;
	vector<vector<float>> transpuesta;
	vector<vector<float>> tfinal;
	float dotp(float x, float y, int e, int& d);
	float interpolation(float ini, float end,float aki);
	float noise(volatile float x, volatile float y);
	UPROPERTY(EditAnywhere)
		int isinchunckx = 0;
	UPROPERTY(EditAnywhere)
		int isinchuncky = 0;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ClassToFind;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
