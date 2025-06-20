﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_Tablet_Brief_Media

#include "Basic.hpp"

#include "W_PreMission_Tablet_Brief_Media_classes.hpp"
#include "W_PreMission_Tablet_Brief_Media_parameters.hpp"


namespace SDK
{

// Function W_PreMission_Tablet_Brief_Media.W_PreMission_Tablet_Brief_Media_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UW_PreMission_Tablet_Brief_Media_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Media_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PreMission_Tablet_Brief_Media.W_PreMission_Tablet_Brief_Media_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_PreMission_Tablet_Brief_Media_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Media_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PreMission_Tablet_Brief_Media.W_PreMission_Tablet_Brief_Media_C.ExecuteUbergraph_W_PreMission_Tablet_Brief_Media
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_Media_C::ExecuteUbergraph_W_PreMission_Tablet_Brief_Media(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Media_C", "ExecuteUbergraph_W_PreMission_Tablet_Brief_Media");

	Params::W_PreMission_Tablet_Brief_Media_C_ExecuteUbergraph_W_PreMission_Tablet_Brief_Media Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_Brief_Media.W_PreMission_Tablet_Brief_Media_C.OnEntryClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Briefing_Media_GalleryEntry_C* Gallery_Entry                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_Media_C::OnEntryClicked(class UW_Briefing_Media_GalleryEntry_C* Gallery_Entry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Media_C", "OnEntryClicked");

	Params::W_PreMission_Tablet_Brief_Media_C_OnEntryClicked Parms{};

	Parms.Gallery_Entry = Gallery_Entry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_Brief_Media.W_PreMission_Tablet_Brief_Media_C.PopulateGallery
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_PreMission_Tablet_Brief_Media_C::PopulateGallery()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Media_C", "PopulateGallery");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PreMission_Tablet_Brief_Media.W_PreMission_Tablet_Brief_Media_C.SelectGalleryImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Briefing_Media_GalleryEntry_C* GalleryEntry                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_Media_C::SelectGalleryImage(class UW_Briefing_Media_GalleryEntry_C* GalleryEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Media_C", "SelectGalleryImage");

	Params::W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage Parms{};

	Parms.GalleryEntry = GalleryEntry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_Brief_Media.W_PreMission_Tablet_Brief_Media_C.SetGalleryImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FMissionPhoto&             MissionPhotoData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PreMission_Tablet_Brief_Media_C::SetGalleryImage(const struct FMissionPhoto& MissionPhotoData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Media_C", "SetGalleryImage");

	Params::W_PreMission_Tablet_Brief_Media_C_SetGalleryImage Parms{};

	Parms.MissionPhotoData = std::move(MissionPhotoData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PreMission_Tablet_Brief_Media.W_PreMission_Tablet_Brief_Media_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_PreMission_Tablet_Brief_Media_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_Media_C", "BP_GetDesiredFocusTarget");

	Params::W_PreMission_Tablet_Brief_Media_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

