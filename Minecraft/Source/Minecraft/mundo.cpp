// Fill out your copyright notice in the Description page of Project Settings.


#include "mundo.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
Amundo::Amundo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void Amundo::perilnoise(vector<float>&nums,int d)
{
	float este=0;
	float n=0;
	terrain.clear();
	terrain.resize(nums.size());
	for (int i = 0; i < nums.size(); i++) {
		terrain.push_back(0);
	}
	for (int i = 0; i < d; i++) {
		ant = nums[0];
		for (int o = 0; o < pow(2,i); o++) {
			este = nums[int(pow(2, lenght - i) - 1)];
			for (int u = 0; u < pow(2, lenght - i); u++) {
				terrain[u + o * pow(2, lenght - i)] += (ant + u*float(este - ant) / pow(2, lenght - i))/ float(pow(2, i));
			}
			ant = este;
		}
	}
	//return terrain;
}

vector<vector<float>> Amundo::perilnoise2d(int x, int d)
{
	srand(seed);
	float este=0;
	float n=0;
	
	vector<float> nums;
	for (int x = 0; x < sizex; x++) {
		nums.clear();
		for (int y = 0; y < sizey; y++) {
			n = (rand() % int(niosines)) / niosines;
			nums.push_back(n);
		}
		perilnoise(nums, d);
		terreno.push_back(terrain);
	}
	for (int x = 0; x < sizex; x++) {
		transpuesta.resize(terreno.size());
		for (int y = 0; y < sizey; y++) {
			transpuesta[x].push_back(terreno[y][x]);
		}
	}
	for (int x = 0; x < sizex; x++) {
		perilnoise(transpuesta[x], d);
		tfinal.push_back(terrain);
	}
	return tfinal;
}

// Called when the game starts or when spawned
void Amundo::BeginPlay()
{

	Super::BeginPlay();
	FVector posi;
	FTransform trans;

	vector<vector<float>> heights = perilnoise2d(sizey, depth);
	for (int x = 0; x < sizex; x++) {
		for (int y = 0; y < sizey; y++) {
			for (int z = 0; z < (heights[x][y]*sizez- reacomodar)*afinidad; z++) {
				posi = FVector((.5f * (sizex - 1) + x) * separacion, (.5f * (sizey - 1) + y) * separacion, z * separacion);
				trans = FTransform(posi);
				GetWorld()->SpawnActor<AActor>(cubito, trans);
			}
		}
	}
	
}

// Called every frame
void Amundo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
