﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Briefing_Dossier

#include "Basic.hpp"

#include "W_Briefing_Dossier_classes.hpp"
#include "W_Briefing_Dossier_parameters.hpp"


namespace SDK
{

// Function W_Briefing_Dossier.W_Briefing_Dossier_C.SetInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterBio&                   Bio                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Briefing_Dossier_C::SetInfo(struct FCharacterBio& Bio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Dossier_C", "SetInfo");

	Params::W_Briefing_Dossier_C_SetInfo Parms{};

	Parms.Bio = std::move(Bio);

	UObject::ProcessEvent(Func, &Parms);

	Bio = std::move(Parms.Bio);
}

}

