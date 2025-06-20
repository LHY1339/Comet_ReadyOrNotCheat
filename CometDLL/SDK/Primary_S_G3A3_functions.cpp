﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Primary_S_G3A3

#include "Basic.hpp"

#include "Primary_S_G3A3_classes.hpp"
#include "Primary_S_G3A3_parameters.hpp"


namespace SDK
{

// Function Primary_S_G3A3.Primary_S_G3A3_C.ExecuteUbergraph_Primary_S_G3A3
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_S_G3A3_C::ExecuteUbergraph_Primary_S_G3A3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Primary_S_G3A3_C", "ExecuteUbergraph_Primary_S_G3A3");

	Params::Primary_S_G3A3_C_ExecuteUbergraph_Primary_S_G3A3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Primary_S_G3A3.Primary_S_G3A3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrimary_S_G3A3_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Primary_S_G3A3_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Primary_S_G3A3.Primary_S_G3A3_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_S_G3A3_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Primary_S_G3A3_C", "ReceiveTick");

	Params::Primary_S_G3A3_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

