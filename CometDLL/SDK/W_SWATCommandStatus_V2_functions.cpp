﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SWATCommandStatus_V2

#include "Basic.hpp"

#include "W_SWATCommandStatus_V2_classes.hpp"
#include "W_SWATCommandStatus_V2_parameters.hpp"


namespace SDK
{

// Function W_SWATCommandStatus_V2.W_SWATCommandStatus_V2_C.ExecuteUbergraph_W_SWATCommandStatus_V2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SWATCommandStatus_V2_C::ExecuteUbergraph_W_SWATCommandStatus_V2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SWATCommandStatus_V2_C", "ExecuteUbergraph_W_SWATCommandStatus_V2");

	Params::W_SWATCommandStatus_V2_C_ExecuteUbergraph_W_SWATCommandStatus_V2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SWATCommandStatus_V2.W_SWATCommandStatus_V2_C.ShoulderButtonPressed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Pressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SWATCommandStatus_V2_C::ShoulderButtonPressed(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SWATCommandStatus_V2_C", "ShoulderButtonPressed");

	Params::W_SWATCommandStatus_V2_C_ShoulderButtonPressed Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);
}

}

