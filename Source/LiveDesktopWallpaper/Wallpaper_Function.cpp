


#include "Wallpaper_Function.h"

#include "Windows/MinWindows.h"



//Function to change wallpaper
bool UWallpaper_Function::setWallpaper(const FString& filePath)
{

	int result = SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, const_cast<TCHAR*>(*filePath), SPIF_UPDATEINIFILE);
	bool changed = (result == 0 ? false : true);

	//Log Result
	UE_LOG(LogTemp, Log, TEXT("Wallpaper Saved in: %s | Saved: %s"), *filePath, (result == 0 ? TEXT("True") : TEXT("False")));
	UE_LOG(LogTemp, Log, TEXT("NEWER WALLPAPER!!"));

	return changed;
	

	
}