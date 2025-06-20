﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_PlanningMap_Lines

#include "Basic.hpp"

#include "BPI_PlanningMap_Lines_classes.hpp"
#include "BPI_PlanningMap_Lines_parameters.hpp"


namespace SDK
{

// Function BPI_PlanningMap_Lines.BPI_PlanningMap_Lines_C.ScaleLineWeightByZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  CurrentZoom                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_PlanningMap_Lines_C::ScaleLineWeightByZoom(double CurrentZoom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_PlanningMap_Lines_C", "ScaleLineWeightByZoom");

	Params::BPI_PlanningMap_Lines_C_ScaleLineWeightByZoom Parms{};

	Parms.CurrentZoom = CurrentZoom;

	AsUObject()->ProcessEvent(Func, &Parms);
}

}

