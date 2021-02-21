// Fill out your copyright notice in the Description page of Project Settings.


#include "mundo.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpectatorPawn.h"
#include "Components/SceneComponent.h"
#include<algorithm>
#include <math.h> 
// Sets default values
Amundo::Amundo()
{
	PrimaryActorTick.bCanEverTick = true;
}

int Amundo::getvectorat(int x, int y, int z)
{
	srand(seed);
	subseed = seed + (rand() % 7) * x + (rand() % 11) * y+ (rand() % 13) * z;
	srand(subseed);
	return rand() % 4;
}

void Amundo::makevektors(int s)
{
	
	vectors.push_back(vector<vector<int>>());
	vectors[vectors.size()-1].resize(s);
	for (int x = 0; x < s; x++) {
		for (int y = 0; y < s; y++) {
			vectors[vectors.size()-1][x].push_back(rand() % 4);
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
	//srand(subseed);
	float este=0;
	float n=0;
	
	vector<float> nums;
 	for (int x = 0; x < pow(2, d); x++) {
		nums.clear();
		for (int y = 0; y < pow(2,d); y++) {
//			n = noise(x * (numofcuads - 1) / pow(2, d)+ (numofcuads - 1) / pow(2, d) /2.f, y * (numofcuads - 1) / pow(2, d) + (numofcuads - 1) / pow(2, d) / 2.f);
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

float Amundo::dotp(float x, float y, int e, int d)
{
	if (e > 1) {
		y =  y-1;
	}
	if (e % 2 != 0) {
		x = x-1;
	}
	if (d <= 1) {
		y *= -1;
	}
	if (d % 2 == 0) {
		x *= -1;
	}
	return x+y;
}

float Amundo::interpolation(float ini, float end,float aki)
{
	return ini+aki*(end-ini);
}

float Amundo::getnoises(float x, float y)
{
	float ans=0;
	for (int a = 0; a < noisesize.Num(); a++) {
		ans+=noise(x, y, a)* noisesize[a];
	}
	return ans;
}

float Amundo::noise(volatile float x, volatile float y,int a)
{
	if (!v) {
		return 0;
	}
	volatile float nx = x / sizedivs * (noises[a] - 1)+ (noises[a] - 1)/(sizedivs *2.f);
	volatile float ny = y / sizedivs * (noises[a] - 1) + (noises[a] - 1) / (sizedivs * 2.f);
	volatile int xint = nx;
	volatile int yint = ny;
	volatile float xres = nx-xint;
	volatile float yres = ny-yint;
	volatile float p00 = dotp(xres, yres, 0, getvectorat(xint,yint,a));
	volatile float p01 = dotp(xres, yres, 1, getvectorat(xint+1, yint, a));
	volatile float p02 = dotp(xres, yres, 2, getvectorat(xint, yint+1, a));
	volatile float p03 = dotp(xres, yres, 3, getvectorat(xint+1, yint+1, a));
	volatile float p1 = interpolation(p00, p01, xres);
	volatile float p2 = interpolation(p02,p03 , xres);
	volatile float p = interpolation(p1, p2, yres);
	return p;

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

void Amundo::createchuncks(int x, int y)
{
	createchunck(x, y);
	createchunck(x - 1, y);
	createchunck(x, y-1);
	createchunck(x+1, y);
	createchunck(x, y+1);
	vector<string>ss;
	for (std::pair< string, vector<void*>> a : cubesinchunk) {
		if (std::find(tempcoords.begin(), tempcoords.end(), a.first) == tempcoords.end()) {
			for (void* e : a.second) {
				((AActor*)e)->Destroy();
			}
			coords.erase(std::find(coords.begin(), coords.end(), a.first));
			a.second.clear();
			ss.push_back(a.first);
		}
	}
	for (string s : ss) {
		cubesinchunk.erase(s);
	}
	tempcoords.clear();
}

void Amundo::createchunck(int px, int py)
{
	string s = std::to_string(px) + std::to_string(py);
	tempcoords.push_back(s);
	if (std::find(coords.begin(), coords.end(),s) != coords.end()) {
		return;
	}
	coords.push_back(s);
	FVector posi;
	FTransform trans;
	int n = 0;
	int z;
	cubesinchunk.insert({ s, {} });
	/*vectors.clear();
	for (int a : noises) {
		makevektors(a);
	}*/
	//perilnoise2d(depth);
	//AActor *a;
	volatile int ran=0;
	for (volatile int x = 0; x < sizex; x++) {
		for (volatile int y = 0; y < sizey; y++) {
			n = 0;
			for (z = 0; z < round((getnoises(x+px*sizex, y+py*sizey )/*+ peril(x, y)* afinidad*/) * sizez) + reacomodar; z++) {
				if (z == tcapas[n]) {
					n++;
					if (n == tcapas.Num()) {
						break;
					}
				}
				posi = FVector((x - .5f * (sizex - 1)+ sizex*px) * separacion, (y - .5f * (sizey - 1)+sizey * py) * separacion, z * separacion);
				trans = FTransform(posi);
				cubesinchunk[s].push_back((void*)GetWorld()->SpawnActor<AActor>(capas[n], trans));
			}
			srand(seed + px * 7 + py * 11 + x * 13 + y * 17);
			if (rand() % probtree == 0) {
				posi = FVector((x - .5f * (sizex - 1)+sizex * px) * separacion , (y - .5f * (sizey - 1) + sizey * py) * separacion , z * separacion);
				trans = FTransform(posi);
				cubesinchunk[s].push_back((void*)GetWorld()->SpawnActor<AActor>(tree, trans));
			}
			for (z; z < awalvl; z++) {
				posi = FVector((x - .5f * (sizex - 1) + sizex * px) * separacion , (y - .5f * (sizey - 1) + sizey * py) * separacion + sizey * py, z * separacion);
				trans = FTransform(posi);
				cubesinchunk[s].push_back((void*)GetWorld()->SpawnActor<AActor>(awa, trans));
			}
		}
	}
}

// Called when the game starts or when spawned
void Amundo::BeginPlay()
{
	Super::BeginPlay();
	createchuncks(0, 0);
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
		createchuncks(isinchunckx, isinchuncky);
	}
}

