﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_SR16

#include "Basic.hpp"

#include "ANIMBP_SR16_classes.hpp"
#include "ANIMBP_SR16_parameters.hpp"


namespace SDK
{

// Function ANIMBP_SR16.ANIMBP_SR16_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UANIMBP_SR16_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_SR16_C", "AnimGraph");

	Params::ANIMBP_SR16_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ANIMBP_SR16.ANIMBP_SR16_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_SR16_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_SR16_C", "AnimNotify_DropSpeedReloadMagazine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_SR16.ANIMBP_SR16_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)

void UANIMBP_SR16_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_SR16_C", "AnimNotify_ShowMag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_SR16.ANIMBP_SR16_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_SR16_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_SR16_C", "BlueprintUpdateAnimation");

	Params::ANIMBP_SR16_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ANIMBP_SR16.ANIMBP_SR16_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SR16_AnimGraphNode_BlendListByBool_AA2E89B64E694456625A089EE5940CBF
// (BlueprintEvent)

void UANIMBP_SR16_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SR16_AnimGraphNode_BlendListByBool_AA2E89B64E694456625A089EE5940CBF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_SR16_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SR16_AnimGraphNode_BlendListByBool_AA2E89B64E694456625A089EE5940CBF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_SR16.ANIMBP_SR16_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SR16_AnimGraphNode_ModifyBone_3DFE334F4E84BA76F095E4988956A17A
// (BlueprintEvent)

void UANIMBP_SR16_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SR16_AnimGraphNode_ModifyBone_3DFE334F4E84BA76F095E4988956A17A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_SR16_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SR16_AnimGraphNode_ModifyBone_3DFE334F4E84BA76F095E4988956A17A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ANIMBP_SR16.ANIMBP_SR16_C.ExecuteUbergraph_ANIMBP_SR16
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_SR16_C::ExecuteUbergraph_ANIMBP_SR16(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ANIMBP_SR16_C", "ExecuteUbergraph_ANIMBP_SR16");

	Params::ANIMBP_SR16_C_ExecuteUbergraph_ANIMBP_SR16 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

