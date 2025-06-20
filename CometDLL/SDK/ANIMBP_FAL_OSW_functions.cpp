﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_FAL_OSW

#include "Basic.hpp"

#include "ANIMBP_FAL_OSW_classes.hpp"
#include "ANIMBP_FAL_OSW_parameters.hpp"


namespace SDK
{

// Function ANIMBP_FAL_OSW.ANIMBP_FAL_OSW_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UANIMBP_FAL_OSW_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_FAL_OSW_C", "AnimGraph");

	Params::ANIMBP_FAL_OSW_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ANIMBP_FAL_OSW.ANIMBP_FAL_OSW_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_FAL_OSW_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_FAL_OSW_C", "AnimNotify_DropSpeedReloadMagazine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_FAL_OSW.ANIMBP_FAL_OSW_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_FAL_OSW_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_FAL_OSW_C", "AnimNotify_ShowMag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_FAL_OSW.ANIMBP_FAL_OSW_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_FAL_OSW_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_FAL_OSW_C", "BlueprintUpdateAnimation");

	Params::ANIMBP_FAL_OSW_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ANIMBP_FAL_OSW.ANIMBP_FAL_OSW_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_OSW_AnimGraphNode_BlendListByBool_543E70E1423F6A2B633E58B8299BC237
// (BlueprintEvent)

void UANIMBP_FAL_OSW_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_OSW_AnimGraphNode_BlendListByBool_543E70E1423F6A2B633E58B8299BC237()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_FAL_OSW_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_OSW_AnimGraphNode_BlendListByBool_543E70E1423F6A2B633E58B8299BC237");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_FAL_OSW.ANIMBP_FAL_OSW_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_OSW_AnimGraphNode_ModifyBone_3C9F1C2D4BA8765D9DB9679390506EF4
// (BlueprintEvent)

void UANIMBP_FAL_OSW_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_OSW_AnimGraphNode_ModifyBone_3C9F1C2D4BA8765D9DB9679390506EF4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_FAL_OSW_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_OSW_AnimGraphNode_ModifyBone_3C9F1C2D4BA8765D9DB9679390506EF4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_FAL_OSW.ANIMBP_FAL_OSW_C.ExecuteUbergraph_ANIMBP_FAL_OSW
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_FAL_OSW_C::ExecuteUbergraph_ANIMBP_FAL_OSW(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_FAL_OSW_C", "ExecuteUbergraph_ANIMBP_FAL_OSW");

	Params::ANIMBP_FAL_OSW_C_ExecuteUbergraph_ANIMBP_FAL_OSW Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

