﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Library_UI_BriefingFunctions

#include "Basic.hpp"

#include "Library_UI_BriefingFunctions_classes.hpp"
#include "Library_UI_BriefingFunctions_parameters.hpp"


namespace SDK
{

// Function Library_UI_BriefingFunctions.Library_UI_BriefingFunctions_C.GetTimelineEventTestData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundWave**                      Audio_Asset                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTimelineEvent>*          Events                                                 (Parm, OutParm)
// TMap<double, struct FTimelineEvent>*    EventEntries                                           (Parm, OutParm)

void ULibrary_UI_BriefingFunctions_C::GetTimelineEventTestData(class UObject* __WorldContext, class USoundWave** Audio_Asset, TArray<struct FTimelineEvent>* Events, TMap<double, struct FTimelineEvent>* EventEntries)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Library_UI_BriefingFunctions_C", "GetTimelineEventTestData");

	Params::Library_UI_BriefingFunctions_C_GetTimelineEventTestData Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Audio_Asset != nullptr)
		*Audio_Asset = Parms.Audio_Asset;

	if (Events != nullptr)
		*Events = std::move(Parms.Events);

	if (EventEntries != nullptr)
		*EventEntries = std::move(Parms.EventEntries);
}

}

