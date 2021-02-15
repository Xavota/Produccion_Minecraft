// Fill out your copyright notice in the Description page of Project Settings.


#include "mundo.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpectatorPawn.h"
#include<algorithm>
#include <math.h> 
// Sets default values
Amundo::Amundo()
{
	PrimaryActorTick.bCanEverTick = true;
}

void Amundo::makevektors()
{
	srand(seed);
	vectors.resize(numofcuads);
	for (int x = 0; x < numofcuads; x++) {
		for (int y = 0; y < numofcuads; y++) {
			vectors[x].push_back(rand() % 4);
		}
	}
		
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
			este = nums[int(pow(2, d - i) - 1)];
			for (int u = 0; u < pow(2, d - i); u++) {
				terrain[u + o * pow(2, d - i)] += (ant + u*float(este - ant) / pow(2, d - i))/ float(pow(2, i));
			}
			ant = este;
		}
	}
}

void Amundo::perilnoise2d(int d)
{
	srand(seed);
	float este=0;
	float n=0;
	
	vector<float> nums;
	for (int x = 0; x < pow(2, d); x++) {
		nums.clear();
		for (int y = 0; y < pow(2,d); y++) {
			n = (rand() % int(niosines)) / niosines;
			nums.push_back(n);
		}
		perilnoise(nums, d);
		terreno.push_back(terrain);
	}
	for (int x = 0; x < pow(2, d); x++) {
		transpuesta.resize(terreno.size());
		for (int y = 0; y < pow(2, d); y++) {
			transpuesta[x].push_back(terreno[y][x]);
		}
	}
	for (int x = 0; x < pow(2, d); x++) {
		perilnoise(transpuesta[x], d);
		tfinal.push_back(terrain);
	}
}

float Amundo::dotp(float x, float y, int e, int& d)
{
	if (e > 1) {
		y =  y-1;
	}
	if (e % 2 != 0) {
		x = x-1;
	}
	if (d > 1) {
		y *= -1;
	}
	if (e % 2 == 0) {
		x *= -1;
	}
	return x+y;
}

float Amundo::interpolation(float ini, float end,float aki)
{
	return ini+aki*(end-ini);
}

float Amundo::noise(volatile float x, volatile float y)
{
	if (!v) {
		return 0;
	}
	volatile float nx = x / sizex * (numofcuads-1);
	volatile float ny = y / sizex * (numofcuads - 1);
	volatile int xint = nx;
	volatile int yint = ny;
	volatile float xres = nx-xint;
	volatile float yres = ny-yint;
	volatile float p00 = dotp(xres, yres, 0, vectors[xint][yint]);
	volatile float p01 = dotp(xres, yres, 1, vectors[xint + 1][yint]);
	volatile float p1 = interpolation(p00, p01, xres);
	volatile float p2 = interpolation(dotp(xres, yres, 2, vectors[xint][yint + 1]), dotp(xres, yres, 3, vectors[xint + 1][yint + 1]), xres);
	return interpolation(p1,p2, yres);

}

float Amundo::peril(float x, float y)
{
	if (!rn) {
		return 0;
	}
	volatile float nx = x / sizex * (pow(2, depth)-1);
	volatile float ny = y / sizex * (pow(2, depth)-1);
	volatile int xint = nx;
	volatile int yint = ny;
	volatile float xres = nx - xint;
	volatile float yres = ny - yint;
	float p1 = interpolation(tfinal[xint][yint], tfinal[xint + 1][yint], xres);
	float p2 = interpolation(tfinal[xint][yint+1], tfinal[xint + 1][yint+1], xres);
	return interpolation(p1, p2, yres);
	return 0;
}

void Amundo::createchunck(int px, int py)
{

	if (std::find(coords.begin(), coords.end(), std::to_string(px)+ std::to_string(py)) != coords.end()) {
		return;
	}
	coords.push_back(std::to_string(px) + std::to_string(py));
	FVector posi;
	FTransform trans;
	int n = 0;
	int z;
	makevektors();
	perilnoise2d(depth);
	for (int x = 0; x < sizex; x++) {
		for (int y = 0; y < sizey; y++) {
			n = 0;
			for (z = 0; z < round((noise(x, y) + peril(x, y)) * sizez) + reacomodar; z++) {
				if (z == tcapas[n]) {
					n++;
					if (n == tcapas.Num()) {
						break;
					}
				}
				posi = FVector((x - .5f * (sizex - 1)+ sizex*px) * separacion, (y - .5f * (sizey - 1)+sizey * py) * separacion, z * separacion);
				trans = FTransform(posi);
				GetWorld()->SpawnActor<AActor>(capas[n], trans);
			}
			for (z; z < awalvl; z++) {
				posi = FVector((x - .5f * (sizex - 1)) * separacion, (y - .5f * (sizey - 1)) * separacion, z * separacion);
				trans = FTransform(posi);
				GetWorld()->SpawnActor<AActor>(awa, trans);
			}
		}
	}
}

// Called when the game starts or when spawned
void Amundo::BeginPlay()
{

	Super::BeginPlay();
	createchunck(0, 0);
}

// Called every frame
void Amundo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClassToFind, FoundActors);
	//ACharacter* p= UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	if (round(FoundActors[0]->GetActorLocation().X / (sizex * separacion))!= isinchunckx || round(FoundActors[0]->GetActorLocation().Y / (sizey * separacion))!= isinchuncky) {
		isinchunckx = round(FoundActors[0]->GetActorLocation().X / (sizex * separacion));
		isinchuncky = round(FoundActors[0]->GetActorLocation().Y / (sizey * separacion));
		createchunck(isinchunckx, isinchuncky);
	}
}

