﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIAction_ThrowWeapon

#include "Basic.hpp"

#include "AIAction_ThrowWeapon_classes.hpp"
#include "AIAction_ThrowWeapon_parameters.hpp"


namespace SDK
{

// Function AIAction_ThrowWeapon.AIAction_ThrowWeapon_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)

void UAIAction_ThrowWeapon_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIAction_ThrowWeapon_C", "BeginAction_Blueprint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIAction_ThrowWeapon.AIAction_ThrowWeapon_C.ExecuteUbergraph_AIAction_ThrowWeapon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ThrowWeapon_C::ExecuteUbergraph_AIAction_ThrowWeapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIAction_ThrowWeapon_C", "ExecuteUbergraph_AIAction_ThrowWeapon");

	Params::AIAction_ThrowWeapon_C_ExecuteUbergraph_AIAction_ThrowWeapon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIAction_ThrowWeapon.AIAction_ThrowWeapon_C.Tick_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ThrowWeapon_C::Tick_Blueprint(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIAction_ThrowWeapon_C", "Tick_Blueprint");

	Params::AIAction_ThrowWeapon_C_Tick_Blueprint Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIAction_ThrowWeapon.AIAction_ThrowWeapon_C.ShouldPerformAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIAction_ThrowWeapon_C::ShouldPerformAction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIAction_ThrowWeapon_C", "ShouldPerformAction");

	Params::AIAction_ThrowWeapon_C_ShouldPerformAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

