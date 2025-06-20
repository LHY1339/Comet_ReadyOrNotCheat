﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AICompliantAction_StationaryFake

#include "Basic.hpp"

#include "AICompliantAction_StationaryFake_classes.hpp"
#include "AICompliantAction_StationaryFake_parameters.hpp"


namespace SDK
{

// Function AICompliantAction_StationaryFake.AICompliantAction_StationaryFake_C.EndAction_Blueprint
// (Event, Protected, BlueprintEvent)

void UAICompliantAction_StationaryFake_C::EndAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AICompliantAction_StationaryFake_C", "EndAction_Blueprint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AICompliantAction_StationaryFake.AICompliantAction_StationaryFake_C.ExecuteUbergraph_AICompliantAction_StationaryFake
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAICompliantAction_StationaryFake_C::ExecuteUbergraph_AICompliantAction_StationaryFake(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AICompliantAction_StationaryFake_C", "ExecuteUbergraph_AICompliantAction_StationaryFake");

	Params::AICompliantAction_StationaryFake_C_ExecuteUbergraph_AICompliantAction_StationaryFake Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

