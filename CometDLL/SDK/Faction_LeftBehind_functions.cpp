﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Faction_LeftBehind

#include "Basic.hpp"

#include "Faction_LeftBehind_classes.hpp"
#include "Faction_LeftBehind_parameters.hpp"


namespace SDK
{

// Function Faction_LeftBehind.Faction_LeftBehind_C.ExecuteUbergraph_Faction_LeftBehind
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFaction_LeftBehind_C::ExecuteUbergraph_Faction_LeftBehind(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Faction_LeftBehind_C", "ExecuteUbergraph_Faction_LeftBehind");

	Params::Faction_LeftBehind_C_ExecuteUbergraph_Faction_LeftBehind Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

