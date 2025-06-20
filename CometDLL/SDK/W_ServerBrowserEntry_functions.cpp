﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ServerBrowserEntry

#include "Basic.hpp"

#include "W_ServerBrowserEntry_classes.hpp"
#include "W_ServerBrowserEntry_parameters.hpp"


namespace SDK
{

// Function W_ServerBrowserEntry.W_ServerBrowserEntry_C.BndEvt__W_ServerBrowserEntry_W_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                      Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ServerBrowserEntry_C::BndEvt__W_ServerBrowserEntry_W_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ServerBrowserEntry_C", "BndEvt__W_ServerBrowserEntry_W_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::W_ServerBrowserEntry_C_BndEvt__W_ServerBrowserEntry_W_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ServerBrowserEntry.W_ServerBrowserEntry_C.ExecuteUbergraph_W_ServerBrowserEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ServerBrowserEntry_C::ExecuteUbergraph_W_ServerBrowserEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ServerBrowserEntry_C", "ExecuteUbergraph_W_ServerBrowserEntry");

	Params::W_ServerBrowserEntry_C_ExecuteUbergraph_W_ServerBrowserEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

