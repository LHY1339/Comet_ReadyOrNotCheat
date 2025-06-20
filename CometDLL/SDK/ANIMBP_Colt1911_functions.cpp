﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_Colt1911

#include "Basic.hpp"

#include "ANIMBP_Colt1911_classes.hpp"
#include "ANIMBP_Colt1911_parameters.hpp"


namespace SDK
{

// Function ANIMBP_Colt1911.ANIMBP_Colt1911_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UANIMBP_Colt1911_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_Colt1911_C", "AnimGraph");

	Params::ANIMBP_Colt1911_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ANIMBP_Colt1911.ANIMBP_Colt1911_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_Colt1911_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_Colt1911_C", "AnimNotify_DropSpeedReloadMagazine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_Colt1911.ANIMBP_Colt1911_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_Colt1911_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_Colt1911_C", "AnimNotify_ShowMag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_Colt1911.ANIMBP_Colt1911_C.AnimNotify_SlideBack
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_Colt1911_C::AnimNotify_SlideBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_Colt1911_C", "AnimNotify_SlideBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_Colt1911.ANIMBP_Colt1911_C.AnimNotify_SlideForward
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_Colt1911_C::AnimNotify_SlideForward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_Colt1911_C", "AnimNotify_SlideForward");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_Colt1911.ANIMBP_Colt1911_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Colt1911_AnimGraphNode_BlendListByBool_0947D15B4B41B2481BEAD685D38DAB76
// (BlueprintEvent)

void UANIMBP_Colt1911_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Colt1911_AnimGraphNode_BlendListByBool_0947D15B4B41B2481BEAD685D38DAB76()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_Colt1911_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Colt1911_AnimGraphNode_BlendListByBool_0947D15B4B41B2481BEAD685D38DAB76");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_Colt1911.ANIMBP_Colt1911_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Colt1911_AnimGraphNode_BlendListByBool_6A7D8B56402439E51D649F9A89C4D725
// (BlueprintEvent)

void UANIMBP_Colt1911_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Colt1911_AnimGraphNode_BlendListByBool_6A7D8B56402439E51D649F9A89C4D725()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_Colt1911_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Colt1911_AnimGraphNode_BlendListByBool_6A7D8B56402439E51D649F9A89C4D725");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_Colt1911.ANIMBP_Colt1911_C.ExecuteUbergraph_ANIMBP_Colt1911
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Colt1911_C::ExecuteUbergraph_ANIMBP_Colt1911(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_Colt1911_C", "ExecuteUbergraph_ANIMBP_Colt1911");

	Params::ANIMBP_Colt1911_C_ExecuteUbergraph_ANIMBP_Colt1911 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

