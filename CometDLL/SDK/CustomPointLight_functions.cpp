﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomPointLight

#include "Basic.hpp"

#include "CustomPointLight_classes.hpp"
#include "CustomPointLight_parameters.hpp"


namespace SDK
{

// Function CustomPointLight.CustomPointLight_C.ExecuteUbergraph_CustomPointLight
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACustomPointLight_C::ExecuteUbergraph_CustomPointLight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomPointLight_C", "ExecuteUbergraph_CustomPointLight");

	Params::CustomPointLight_C_ExecuteUbergraph_CustomPointLight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomPointLight.CustomPointLight_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACustomPointLight_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomPointLight_C", "ReceiveTick");

	Params::CustomPointLight_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomPointLight.CustomPointLight_C.ToggleVisibility
// (BlueprintCallable, BlueprintEvent)

void ACustomPointLight_C::ToggleVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomPointLight_C", "ToggleVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

