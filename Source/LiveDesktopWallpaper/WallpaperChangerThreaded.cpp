// Fill out your copyright notice in the Description page of Project Settings.


#include "WallpaperChangerThreaded.h"

#include "Windows/MinWindows.h"

// Sets default values
AWallpaperChangerThreaded::AWallpaperChangerThreaded()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWallpaperChangerThreaded::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWallpaperChangerThreaded::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWallpaperChangerThreaded::LiveWallpaperUpdateFunction(const FString& filePath)
{
	(new FAutoDeleteAsyncTask<WallpaperClass>(filePath))->StartBackgroundTask();
}


WallpaperClass::WallpaperClass(const FString& filePath)
{
	imgPath = filePath;
}

WallpaperClass::~WallpaperClass()
{
	UE_LOG(LogTemp, Log, TEXT("This Task has Finished!!!"));
}

void WallpaperClass::DoWork()
{

	//int result = SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, const_cast<TCHAR*>(*imgPath), SPIF_UPDATEINIFILE);
	int result = SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, const_cast<TCHAR*>(*imgPath),SPIF_UPDATEINIFILE | SPIF_SENDWININICHANGE);
	//bool changed = (result == 0 ? false : true);

	//Log Result
	UE_LOG(LogTemp, Log, TEXT("LIVE_Threaded Wallpaper %s | Saved: %s"), *imgPath, (result == 0 ? TEXT("False") : TEXT("True")));

}
