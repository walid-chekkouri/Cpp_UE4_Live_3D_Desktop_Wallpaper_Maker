// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WallpaperChangerThreaded.generated.h"

UCLASS()
class LIVEDESKTOPWALLPAPER_API AWallpaperChangerThreaded : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWallpaperChangerThreaded();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Function to Update Desktop Wallpaper
	UFUNCTION(BlueprintCallable)
	void LiveWallpaperUpdateFunction(const FString& filePath);




};
//=================================================================

class WallpaperClass : public FNonAbandonableTask
{
public:
	WallpaperClass(const FString& filePath);
	~WallpaperClass();


	//required by UE4
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(WallpaperClass, STATGROUP_ThreadPoolAsyncTasks);
	}

	FString imgPath;

	void DoWork();

};
