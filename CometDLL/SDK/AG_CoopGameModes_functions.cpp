﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AG_CoopGameModes

#include "Basic.hpp"

#include "AG_CoopGameModes_classes.hpp"
#include "AG_CoopGameModes_parameters.hpp"


namespace SDK
{

// Function AG_CoopGameModes.AG_CoopGameModes_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FAIActionDecisionContext&  Context                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAG_CoopGameModes_C::CanOpen(const struct FAIActionDecisionContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AG_CoopGameModes_C", "CanOpen");

	Params::AG_CoopGameModes_C_CanOpen Parms{};

	Parms.Context = std::move(Context);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

