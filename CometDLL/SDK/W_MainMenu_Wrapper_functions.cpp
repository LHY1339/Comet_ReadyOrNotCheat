﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MainMenu_Wrapper

#include "Basic.hpp"

#include "W_MainMenu_Wrapper_classes.hpp"
#include "W_MainMenu_Wrapper_parameters.hpp"


namespace SDK
{

// Function W_MainMenu_Wrapper.W_MainMenu_Wrapper_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_MainMenu_Wrapper_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_Wrapper_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_MainMenu_Wrapper.W_MainMenu_Wrapper_C.ExecuteUbergraph_W_MainMenu_Wrapper
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Wrapper_C::ExecuteUbergraph_W_MainMenu_Wrapper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_MainMenu_Wrapper_C", "ExecuteUbergraph_W_MainMenu_Wrapper");

	Params::W_MainMenu_Wrapper_C_ExecuteUbergraph_W_MainMenu_Wrapper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

