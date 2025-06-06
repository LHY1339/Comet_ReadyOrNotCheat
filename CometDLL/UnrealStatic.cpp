#include "UnrealStatic.h"
#include "SDK.hpp"
#include "Global.h"

float GetDeltaTime()
{
    return SDK::UGameplayStatics::GetWorldDeltaSeconds(Unreal::GWorld);
}

void GetGWorld()
{
    Unreal::GWorld = SDK::UWorld::GetWorld();
}

void GetGPlayerController()
{
    Unreal::GPlayerController = SDK::UGameplayStatics::GetPlayerController(Unreal::GWorld, 0);
}

void GetGPawn()
{
    Unreal::GPawn = SDK::UGameplayStatics::GetPlayerPawn(Unreal::GWorld, 0);
}