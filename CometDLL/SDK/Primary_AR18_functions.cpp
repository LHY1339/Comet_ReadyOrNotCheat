﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Primary_AR18

#include "Basic.hpp"

#include "Primary_AR18_classes.hpp"
#include "Primary_AR18_parameters.hpp"


namespace SDK
{

// Function Primary_AR18.Primary_AR18_C.ExecuteUbergraph_Primary_AR18
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_AR18_C::ExecuteUbergraph_Primary_AR18(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Primary_AR18_C", "ExecuteUbergraph_Primary_AR18");

	Params::Primary_AR18_C_ExecuteUbergraph_Primary_AR18 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Primary_AR18.Primary_AR18_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_AR18_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Primary_AR18_C", "ReceiveTick");

	Params::Primary_AR18_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

