﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Projectile_Flare

#include "Basic.hpp"

#include "Projectile_Flare_classes.hpp"
#include "Projectile_Flare_parameters.hpp"


namespace SDK
{

// Function Projectile_Flare.Projectile_Flare_C.ExecuteUbergraph_Projectile_Flare
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_Flare_C::ExecuteUbergraph_Projectile_Flare(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Projectile_Flare_C", "ExecuteUbergraph_Projectile_Flare");

	Params::Projectile_Flare_C_ExecuteUbergraph_Projectile_Flare Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Projectile_Flare.Projectile_Flare_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_Flare_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Projectile_Flare_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Projectile_Flare.Projectile_Flare_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AProjectile_Flare_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Projectile_Flare_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Projectile_Flare.Projectile_Flare_C.SpawnLensFlare
// (BlueprintCallable, BlueprintEvent)

void AProjectile_Flare_C::SpawnLensFlare()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Projectile_Flare_C", "SpawnLensFlare");

	UObject::ProcessEvent(Func, nullptr);
}

}

