﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_MPL

#include "Basic.hpp"

#include "ANIMBP_MPL_classes.hpp"
#include "ANIMBP_MPL_parameters.hpp"


namespace SDK
{

// Function ANIMBP_MPL.ANIMBP_MPL_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UANIMBP_MPL_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_MPL_C", "AnimGraph");

	Params::ANIMBP_MPL_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ANIMBP_MPL.ANIMBP_MPL_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_MPL_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_MPL_C", "AnimNotify_DropSpeedReloadMagazine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_MPL.ANIMBP_MPL_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_MPL_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_MPL_C", "AnimNotify_ShowMag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_MPL.ANIMBP_MPL_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_MPL_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_MPL_C", "BlueprintUpdateAnimation");

	Params::ANIMBP_MPL_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ANIMBP_MPL.ANIMBP_MPL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MPL_AnimGraphNode_BlendListByBool_501C1E98435BDDA8FC1F0EAA9446A07C
// (BlueprintEvent)

void UANIMBP_MPL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MPL_AnimGraphNode_BlendListByBool_501C1E98435BDDA8FC1F0EAA9446A07C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_MPL_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MPL_AnimGraphNode_BlendListByBool_501C1E98435BDDA8FC1F0EAA9446A07C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_MPL.ANIMBP_MPL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MPL_AnimGraphNode_ModifyBone_5E258A3E43716D130B63E7A35F68190F
// (BlueprintEvent)

void UANIMBP_MPL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MPL_AnimGraphNode_ModifyBone_5E258A3E43716D130B63E7A35F68190F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_MPL_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MPL_AnimGraphNode_ModifyBone_5E258A3E43716D130B63E7A35F68190F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_MPL.ANIMBP_MPL_C.ExecuteUbergraph_ANIMBP_MPL
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_MPL_C::ExecuteUbergraph_ANIMBP_MPL(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_MPL_C", "ExecuteUbergraph_ANIMBP_MPL");

	Params::ANIMBP_MPL_C_ExecuteUbergraph_ANIMBP_MPL Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

