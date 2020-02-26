

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"


#include "Wallpaper_Function.generated.h"



UCLASS()
class LIVEDESKTOPWALLPAPER_API UWallpaper_Function : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category="Live Wallpaper")
		static bool setWallpaper(const FString& filePath);
};
