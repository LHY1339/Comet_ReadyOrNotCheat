﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: w_Dropdown

#include "Basic.hpp"

#include "w_Dropdown_classes.hpp"
#include "w_Dropdown_parameters.hpp"


namespace SDK
{

// Function w_Dropdown.w_Dropdown_C.AddFooterOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    ID                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const struct FST_DropdownOptions&       OptionData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Uw_Dropdown_C::AddFooterOption(const class FString& ID, const struct FST_DropdownOptions& OptionData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "AddFooterOption");

	Params::w_Dropdown_C_AddFooterOption Parms{};

	Parms.ID = std::move(ID);
	Parms.OptionData = std::move(OptionData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.AddOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    OptionID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FText&                      OptionText                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_Dropdown_C::AddOption(const class FString& OptionID, const class FText& OptionText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "AddOption");

	Params::w_Dropdown_C_AddOption Parms{};

	Parms.OptionID = std::move(OptionID);
	Parms.OptionText = std::move(OptionText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Handled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Uw_Dropdown_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "BackPage");

	Params::w_Dropdown_C_BackPage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;
}


// Function w_Dropdown.w_Dropdown_C.BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                      Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void Uw_Dropdown_C::BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::w_Dropdown_C_BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                      Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void Uw_Dropdown_C::BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature");

	Params::w_Dropdown_C_BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature
// (BlueprintEvent)

void Uw_Dropdown_C::BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function w_Dropdown.w_Dropdown_C.BndEvt__w_Dropdown_DropdownItemsMenu_K2Node_ComponentBoundEvent_1_HandleBackPress__DelegateSignature
// (BlueprintEvent)

void Uw_Dropdown_C::BndEvt__w_Dropdown_DropdownItemsMenu_K2Node_ComponentBoundEvent_1_HandleBackPress__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "BndEvt__w_Dropdown_DropdownItemsMenu_K2Node_ComponentBoundEvent_1_HandleBackPress__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function w_Dropdown.w_Dropdown_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PageName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Uw_Dropdown_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "ChangePage");

	Params::w_Dropdown_C_ChangePage Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.ClearFooterOptions
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Dropdown_C::ClearFooterOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "ClearFooterOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function w_Dropdown.w_Dropdown_C.ClearOptions
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Dropdown_C::ClearOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "ClearOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function w_Dropdown.w_Dropdown_C.ClearSelection
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Dropdown_C::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "ClearSelection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function w_Dropdown.w_Dropdown_C.Clickaway
// (BlueprintCallable, BlueprintEvent)

void Uw_Dropdown_C::Clickaway()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "Clickaway");

	UObject::ProcessEvent(Func, nullptr);
}


// Function w_Dropdown.w_Dropdown_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Dropdown_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "CloseMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function w_Dropdown.w_Dropdown_C.Collapse
// (BlueprintCallable, BlueprintEvent)

void Uw_Dropdown_C::Collapse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "Collapse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function w_Dropdown.w_Dropdown_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Dropdown_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function w_Dropdown.w_Dropdown_C.DisableInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Disable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Uw_Dropdown_C::DisableInteraction(bool Disable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "DisableInteraction");

	Params::w_Dropdown_C_DisableInteraction Parms{};

	Parms.Disable = Disable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.DisableMenuInputConsume
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Dropdown_C::DisableMenuInputConsume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "DisableMenuInputConsume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function w_Dropdown.w_Dropdown_C.EnableMenuInputConsume
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Dropdown_C::EnableMenuInputConsume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "EnableMenuInputConsume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function w_Dropdown.w_Dropdown_C.ExecuteUbergraph_w_Dropdown
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Uw_Dropdown_C::ExecuteUbergraph_w_Dropdown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "ExecuteUbergraph_w_Dropdown");

	Params::w_Dropdown_C_ExecuteUbergraph_w_Dropdown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.FooterOptionHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    OptionID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void Uw_Dropdown_C::FooterOptionHovered(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "FooterOptionHovered");

	Params::w_Dropdown_C_FooterOptionHovered Parms{};

	Parms.OptionID = std::move(OptionID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.FooterOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    OptionID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void Uw_Dropdown_C::FooterOptionSelected(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "FooterOptionSelected");

	Params::w_Dropdown_C_FooterOptionSelected Parms{};

	Parms.OptionID = std::move(OptionID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.FooterOptionUnhovered
// (BlueprintCallable, BlueprintEvent)

void Uw_Dropdown_C::FooterOptionUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "FooterOptionUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function w_Dropdown.w_Dropdown_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Collapse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Uw_Dropdown_C::Hide(double Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "Hide");

	Params::w_Dropdown_C_Hide Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.On_DropdownMenuAnchor_GetUserMenuContent_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UUserWidget* Uw_Dropdown_C::On_DropdownMenuAnchor_GetUserMenuContent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "On_DropdownMenuAnchor_GetUserMenuContent_0");

	Params::w_Dropdown_C_On_DropdownMenuAnchor_GetUserMenuContent_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function w_Dropdown.w_Dropdown_C.OnDropdown Menu Desired Focus Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                      DesiredFocus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void Uw_Dropdown_C::OnDropdown_Menu_Desired_Focus_Set(class UW_Button_C* DesiredFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "OnDropdown Menu Desired Focus Set");

	Params::w_Dropdown_C_OnDropdown_Menu_Desired_Focus_Set Parms{};

	Parms.DesiredFocus = DesiredFocus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.OpenMenu
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Dropdown_C::OpenMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "OpenMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function w_Dropdown.w_Dropdown_C.OptionHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    OptionID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void Uw_Dropdown_C::OptionHovered(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "OptionHovered");

	Params::w_Dropdown_C_OptionHovered Parms{};

	Parms.OptionID = std::move(OptionID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.OptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    OptionID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void Uw_Dropdown_C::OptionSelected(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "OptionSelected");

	Params::w_Dropdown_C_OptionSelected Parms{};

	Parms.OptionID = std::move(OptionID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.OptionUnhovered
// (BlueprintCallable, BlueprintEvent)

void Uw_Dropdown_C::OptionUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "OptionUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function w_Dropdown.w_Dropdown_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Uw_Dropdown_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "PreConstruct");

	Params::w_Dropdown_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.RemoveFooterOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    ID                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void Uw_Dropdown_C::RemoveFooterOption(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "RemoveFooterOption");

	Params::w_Dropdown_C_RemoveFooterOption Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Uw_Dropdown_C::Reveal(double Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "Reveal");

	Params::w_Dropdown_C_Reveal Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.SetFooterOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TMap<class FString, struct FST_DropdownOptions>&FooterOptions_0                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_Dropdown_C::SetFooterOptions(const TMap<class FString, struct FST_DropdownOptions>& FooterOptions_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "SetFooterOptions");

	Params::w_Dropdown_C_SetFooterOptions Parms{};

	Parms.FooterOptions_0 = std::move(FooterOptions_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamepad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Uw_Dropdown_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "SetInputMode");

	Params::w_Dropdown_C_SetInputMode Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.SetLabelText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      LabelText_0                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_Dropdown_C::SetLabelText(const class FText& LabelText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "SetLabelText");

	Params::w_Dropdown_C_SetLabelText Parms{};

	Parms.LabelText_0 = std::move(LabelText_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.SetOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TMap<class FString, class FText>& Options_0                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_Dropdown_C::SetOptions(const TMap<class FString, class FText>& Options_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "SetOptions");

	Params::w_Dropdown_C_SetOptions Parms{};

	Parms.Options_0 = std::move(Options_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.SetSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    OptionID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void Uw_Dropdown_C::SetSelection(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "SetSelection");

	Params::w_Dropdown_C_SetSelection Parms{};

	Parms.OptionID = std::move(OptionID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.SetSelectionByIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Uw_Dropdown_C::SetSelectionByIndex(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "SetSelectionByIndex");

	Params::w_Dropdown_C_SetSelectionByIndex Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function w_Dropdown.w_Dropdown_C.UpdateLabelText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_Dropdown_C::UpdateLabelText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "UpdateLabelText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function w_Dropdown.w_Dropdown_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget**                         Focus                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void Uw_Dropdown_C::GetFocusTarget(class UWidget** Focus) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("w_Dropdown_C", "GetFocusTarget");

	Params::w_Dropdown_C_GetFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;
}

}

