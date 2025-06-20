﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ConsoleHotkey

#include "Basic.hpp"

#include "W_ConsoleHotkey_classes.hpp"
#include "W_ConsoleHotkey_parameters.hpp"


namespace SDK
{

// Function W_ConsoleHotkey.W_ConsoleHotkey_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_ConsoleHotkey_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ConsoleHotkey_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ConsoleHotkey.W_ConsoleHotkey_C.ExecuteUbergraph_W_ConsoleHotkey
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleHotkey_C::ExecuteUbergraph_W_ConsoleHotkey(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ConsoleHotkey_C", "ExecuteUbergraph_W_ConsoleHotkey");

	Params::W_ConsoleHotkey_C_ExecuteUbergraph_W_ConsoleHotkey Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ConsoleHotkey.W_ConsoleHotkey_C.ShoulderButtonPressed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Pressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleHotkey_C::ShoulderButtonPressed(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ConsoleHotkey_C", "ShoulderButtonPressed");

	Params::W_ConsoleHotkey_C_ShoulderButtonPressed Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);
}

}

