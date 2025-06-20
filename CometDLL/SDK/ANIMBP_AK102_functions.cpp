﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_AK102

#include "Basic.hpp"

#include "ANIMBP_AK102_classes.hpp"
#include "ANIMBP_AK102_parameters.hpp"


namespace SDK
{

// Function ANIMBP_AK102.ANIMBP_AK102_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UANIMBP_AK102_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_AK102_C", "AnimGraph");

	Params::ANIMBP_AK102_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ANIMBP_AK102.ANIMBP_AK102_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_AK102_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_AK102_C", "AnimNotify_DropSpeedReloadMagazine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_AK102.ANIMBP_AK102_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_AK102_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_AK102_C", "AnimNotify_ShowMag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_AK102.ANIMBP_AK102_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_AK102_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_AK102_C", "BlueprintUpdateAnimation");

	Params::ANIMBP_AK102_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ANIMBP_AK102.ANIMBP_AK102_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AK102_AnimGraphNode_ModifyBone_F3E0A01B457F03FAEB42BCB71164D5DC
// (BlueprintEvent)

void UANIMBP_AK102_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AK102_AnimGraphNode_ModifyBone_F3E0A01B457F03FAEB42BCB71164D5DC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_AK102_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AK102_AnimGraphNode_ModifyBone_F3E0A01B457F03FAEB42BCB71164D5DC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_AK102.ANIMBP_AK102_C.ExecuteUbergraph_ANIMBP_AK102
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_AK102_C::ExecuteUbergraph_ANIMBP_AK102(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_AK102_C", "ExecuteUbergraph_ANIMBP_AK102");

	Params::ANIMBP_AK102_C_ExecuteUbergraph_ANIMBP_AK102 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

