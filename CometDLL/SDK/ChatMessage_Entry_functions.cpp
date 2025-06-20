﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChatMessage_Entry

#include "Basic.hpp"

#include "ChatMessage_Entry_classes.hpp"
#include "ChatMessage_Entry_parameters.hpp"


namespace SDK
{

// Function ChatMessage_Entry.ChatMessage_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChatMessage_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatMessage_Entry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatMessage_Entry.ChatMessage_Entry_C.ExecuteUbergraph_ChatMessage_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatMessage_Entry_C::ExecuteUbergraph_ChatMessage_Entry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatMessage_Entry_C", "ExecuteUbergraph_ChatMessage_Entry");

	Params::ChatMessage_Entry_C_ExecuteUbergraph_ChatMessage_Entry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatMessage_Entry.ChatMessage_Entry_C.Get_ChatType_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UChatMessage_Entry_C::Get_ChatType_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatMessage_Entry_C", "Get_ChatType_Text_0");

	Params::ChatMessage_Entry_C_Get_ChatType_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

