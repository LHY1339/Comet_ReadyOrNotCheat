﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ReplayCameraPawn

#include "Basic.hpp"

#include "BP_ReplayCameraPawn_classes.hpp"
#include "BP_ReplayCameraPawn_parameters.hpp"


namespace SDK
{

// Function BP_ReplayCameraPawn.BP_ReplayCameraPawn_C.ExecuteUbergraph_BP_ReplayCameraPawn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ReplayCameraPawn_C::ExecuteUbergraph_BP_ReplayCameraPawn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ReplayCameraPawn_C", "ExecuteUbergraph_BP_ReplayCameraPawn");

	Params::BP_ReplayCameraPawn_C_ExecuteUbergraph_BP_ReplayCameraPawn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ReplayCameraPawn.BP_ReplayCameraPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ReplayCameraPawn_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ReplayCameraPawn_C", "ReceiveTick");

	Params::BP_ReplayCameraPawn_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

