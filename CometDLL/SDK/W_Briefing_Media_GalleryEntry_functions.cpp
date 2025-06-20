﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Briefing_Media_GalleryEntry

#include "Basic.hpp"

#include "W_Briefing_Media_GalleryEntry_classes.hpp"
#include "W_Briefing_Media_GalleryEntry_parameters.hpp"


namespace SDK
{

// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UW_Briefing_Media_GalleryEntry_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Media_GalleryEntry_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UW_Briefing_Media_GalleryEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Media_GalleryEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UW_Briefing_Media_GalleryEntry_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Media_GalleryEntry_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Briefing_Media_GalleryEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Media_GalleryEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.ExecuteUbergraph_W_Briefing_Media_GalleryEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_GalleryEntry_C::ExecuteUbergraph_W_Briefing_Media_GalleryEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Media_GalleryEntry_C", "ExecuteUbergraph_W_Briefing_Media_GalleryEntry");

	Params::W_Briefing_Media_GalleryEntry_C_ExecuteUbergraph_W_Briefing_Media_GalleryEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.SetHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Highlighted                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_GalleryEntry_C::SetHighlight(bool Highlighted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Media_GalleryEntry_C", "SetHighlight");

	Params::W_Briefing_Media_GalleryEntry_C_SetHighlight Parms{};

	Parms.Highlighted = Highlighted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_GalleryEntry_C::SetSelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Media_GalleryEntry_C", "SetSelected");

	Params::W_Briefing_Media_GalleryEntry_C_SetSelected Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.UpdateVisualStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_Briefing_Media_GalleryEntry_C::UpdateVisualStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Media_GalleryEntry_C", "UpdateVisualStyle");

	UObject::ProcessEvent(Func, nullptr);
}

}

