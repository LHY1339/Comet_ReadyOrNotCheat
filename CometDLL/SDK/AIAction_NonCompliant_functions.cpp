﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIAction_NonCompliant

#include "Basic.hpp"

#include "AIAction_NonCompliant_classes.hpp"
#include "AIAction_NonCompliant_parameters.hpp"


namespace SDK
{

// Function AIAction_NonCompliant.AIAction_NonCompliant_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)

void UAIAction_NonCompliant_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIAction_NonCompliant_C", "BeginAction_Blueprint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIAction_NonCompliant.AIAction_NonCompliant_C.ExecuteUbergraph_AIAction_NonCompliant
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_NonCompliant_C::ExecuteUbergraph_AIAction_NonCompliant(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIAction_NonCompliant_C", "ExecuteUbergraph_AIAction_NonCompliant");

	Params::AIAction_NonCompliant_C_ExecuteUbergraph_AIAction_NonCompliant Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIAction_NonCompliant.AIAction_NonCompliant_C.Tick_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_NonCompliant_C::Tick_Blueprint(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIAction_NonCompliant_C", "Tick_Blueprint");

	Params::AIAction_NonCompliant_C_Tick_Blueprint Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIAction_NonCompliant.AIAction_NonCompliant_C.CanBeNonCompliant
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool*                                   Return_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_NonCompliant_C::CanBeNonCompliant(bool* Return_Value) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIAction_NonCompliant_C", "CanBeNonCompliant");

	Params::AIAction_NonCompliant_C_CanBeNonCompliant Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}

}

