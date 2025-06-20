﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_CAR

#include "Basic.hpp"

#include "ANIMBP_CAR_classes.hpp"
#include "ANIMBP_CAR_parameters.hpp"


namespace SDK
{

// Function ANIMBP_CAR.ANIMBP_CAR_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UANIMBP_CAR_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_CAR_C", "AnimGraph");

	Params::ANIMBP_CAR_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ANIMBP_CAR.ANIMBP_CAR_C.AnimNotify_EjectMag
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_CAR_C::AnimNotify_EjectMag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_CAR_C", "AnimNotify_EjectMag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_CAR.ANIMBP_CAR_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_CAR_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_CAR_C", "BlueprintUpdateAnimation");

	Params::ANIMBP_CAR_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ANIMBP_CAR.ANIMBP_CAR_C.ExecuteUbergraph_ANIMBP_CAR
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_CAR_C::ExecuteUbergraph_ANIMBP_CAR(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_CAR_C", "ExecuteUbergraph_ANIMBP_CAR");

	Params::ANIMBP_CAR_C_ExecuteUbergraph_ANIMBP_CAR Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

