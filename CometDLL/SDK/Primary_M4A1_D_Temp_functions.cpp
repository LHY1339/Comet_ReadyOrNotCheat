﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Primary_M4A1_D_Temp

#include "Basic.hpp"

#include "Primary_M4A1_D_Temp_classes.hpp"
#include "Primary_M4A1_D_Temp_parameters.hpp"


namespace SDK
{

// Function Primary_M4A1_D_Temp.Primary_M4A1_D_Temp_C.ExecuteUbergraph_Primary_M4A1_D_Temp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_M4A1_D_Temp_C::ExecuteUbergraph_Primary_M4A1_D_Temp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Primary_M4A1_D_Temp_C", "ExecuteUbergraph_Primary_M4A1_D_Temp");

	Params::Primary_M4A1_D_Temp_C_ExecuteUbergraph_Primary_M4A1_D_Temp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Primary_M4A1_D_Temp.Primary_M4A1_D_Temp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrimary_M4A1_D_Temp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Primary_M4A1_D_Temp_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

