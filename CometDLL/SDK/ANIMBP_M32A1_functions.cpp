﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_M32A1

#include "Basic.hpp"

#include "ANIMBP_M32A1_classes.hpp"
#include "ANIMBP_M32A1_parameters.hpp"


namespace SDK
{

// Function ANIMBP_M32A1.ANIMBP_M32A1_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UANIMBP_M32A1_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_M32A1_C", "AnimGraph");

	Params::ANIMBP_M32A1_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ANIMBP_M32A1.ANIMBP_M32A1_C.AnimNotify_RotateCylinder
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_M32A1_C::AnimNotify_RotateCylinder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_M32A1_C", "AnimNotify_RotateCylinder");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_M32A1.ANIMBP_M32A1_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_M32A1_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_M32A1_C", "BlueprintUpdateAnimation");

	Params::ANIMBP_M32A1_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ANIMBP_M32A1.ANIMBP_M32A1_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M32A1_AnimGraphNode_ModifyBone_D1634E8C4A2BA2B78B8A69BC21FBAFB2
// (BlueprintEvent)

void UANIMBP_M32A1_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M32A1_AnimGraphNode_ModifyBone_D1634E8C4A2BA2B78B8A69BC21FBAFB2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_M32A1_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M32A1_AnimGraphNode_ModifyBone_D1634E8C4A2BA2B78B8A69BC21FBAFB2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_M32A1.ANIMBP_M32A1_C.ExecuteUbergraph_ANIMBP_M32A1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_M32A1_C::ExecuteUbergraph_ANIMBP_M32A1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_M32A1_C", "ExecuteUbergraph_ANIMBP_M32A1");

	Params::ANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

