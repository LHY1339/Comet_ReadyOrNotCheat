﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Primary_MPL

#include "Basic.hpp"

#include "Primary_MPL_classes.hpp"
#include "Primary_MPL_parameters.hpp"


namespace SDK
{

// Function Primary_MPL.Primary_MPL_C.ExecuteUbergraph_Primary_MPL
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_MPL_C::ExecuteUbergraph_Primary_MPL(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Primary_MPL_C", "ExecuteUbergraph_Primary_MPL");

	Params::Primary_MPL_C_ExecuteUbergraph_Primary_MPL Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Primary_MPL.Primary_MPL_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrimary_MPL_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Primary_MPL_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

