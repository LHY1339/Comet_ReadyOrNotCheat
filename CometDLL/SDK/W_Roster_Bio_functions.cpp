﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Roster_Bio

#include "Basic.hpp"

#include "W_Roster_Bio_classes.hpp"
#include "W_Roster_Bio_parameters.hpp"


namespace SDK
{

// Function W_Roster_Bio.W_Roster_Bio_C.ExecuteUbergraph_W_Roster_Bio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Bio_C::ExecuteUbergraph_W_Roster_Bio(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Roster_Bio_C", "ExecuteUbergraph_W_Roster_Bio");

	Params::W_Roster_Bio_C_ExecuteUbergraph_W_Roster_Bio Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Roster_Bio.W_Roster_Bio_C.SetBioText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      BioText                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Roster_Bio_C::SetBioText(const class FText& BioText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Roster_Bio_C", "SetBioText");

	Params::W_Roster_Bio_C_SetBioText Parms{};

	Parms.BioText = std::move(BioText);

	UObject::ProcessEvent(Func, &Parms);
}

}

