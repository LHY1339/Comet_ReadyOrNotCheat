﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Briefing_Intel

#include "Basic.hpp"

#include "W_Briefing_Intel_classes.hpp"
#include "W_Briefing_Intel_parameters.hpp"


namespace SDK
{

// Function W_Briefing_Intel.W_Briefing_Intel_C.AddToList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Content                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Intel_C::AddToList(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "AddToList");

	Params::W_Briefing_Intel_C_AddToList Parms{};

	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// const struct FCharacterBio&             Bio                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Briefing_Intel_C::BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature");

	Params::W_Briefing_Intel_C_BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature Parms{};

	Parms.Bio = std::move(Bio);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// const struct FCharacterBio&             Bio                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Briefing_Intel_C::BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature");

	Params::W_Briefing_Intel_C_BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature Parms{};

	Parms.Bio = std::move(Bio);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Briefing_Intel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.CreateLists
// (Public, BlueprintCallable, BlueprintEvent)

void UW_Briefing_Intel_C::CreateLists()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "CreateLists");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.ExecuteUbergraph_W_Briefing_Intel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Intel_C::ExecuteUbergraph_W_Briefing_Intel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "ExecuteUbergraph_W_Briefing_Intel");

	Params::W_Briefing_Intel_C_ExecuteUbergraph_W_Briefing_Intel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.InitCivilians
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCharacterBio>&           CivilianBios                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Briefing_Intel_C::InitCivilians(TArray<struct FCharacterBio>& CivilianBios)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "InitCivilians");

	Params::W_Briefing_Intel_C_InitCivilians Parms{};

	Parms.CivilianBios = std::move(CivilianBios);

	UObject::ProcessEvent(Func, &Parms);

	CivilianBios = std::move(Parms.CivilianBios);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FST_Briefing_Intel&        Intel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_Briefing_Intel_C::Initialize(const struct FST_Briefing_Intel& Intel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "Initialize");

	Params::W_Briefing_Intel_C_Initialize Parms{};

	Parms.Intel = std::move(Intel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.InitMedia
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_Briefing_Evidence>&   MediaIntel                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Briefing_Intel_C::InitMedia(TArray<struct FST_Briefing_Evidence>& MediaIntel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "InitMedia");

	Params::W_Briefing_Intel_C_InitMedia Parms{};

	Parms.MediaIntel = std::move(MediaIntel);

	UObject::ProcessEvent(Func, &Parms);

	MediaIntel = std::move(Parms.MediaIntel);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.InitSuspects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCharacterBio>&           SuspectBios                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Briefing_Intel_C::InitSuspects(TArray<struct FCharacterBio>& SuspectBios)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "InitSuspects");

	Params::W_Briefing_Intel_C_InitSuspects Parms{};

	Parms.SuspectBios = std::move(SuspectBios);

	UObject::ProcessEvent(Func, &Parms);

	SuspectBios = std::move(Parms.SuspectBios);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Intel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "PreConstruct");

	Params::W_Briefing_Intel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.UpdateBioIntel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FCharacterBio&             Bio                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Briefing_Intel_C::UpdateBioIntel(const struct FCharacterBio& Bio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "UpdateBioIntel");

	Params::W_Briefing_Intel_C_UpdateBioIntel Parms{};

	Parms.Bio = std::move(Bio);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.UpdateMediaIntel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FST_Briefing_Evidence&     Media                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_Briefing_Intel_C::UpdateMediaIntel(const struct FST_Briefing_Evidence& Media)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Briefing_Intel_C", "UpdateMediaIntel");

	Params::W_Briefing_Intel_C_UpdateMediaIntel Parms{};

	Parms.Media = std::move(Media);

	UObject::ProcessEvent(Func, &Parms);
}

}

