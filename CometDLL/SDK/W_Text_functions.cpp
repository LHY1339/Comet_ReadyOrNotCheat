﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Text

#include "Basic.hpp"

#include "W_Text_classes.hpp"
#include "W_Text_parameters.hpp"


namespace SDK
{

// Function W_Text.W_Text_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Text_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Text_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Text.W_Text_C.ExecuteUbergraph_W_Text
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Text_C::ExecuteUbergraph_W_Text(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Text_C", "ExecuteUbergraph_W_Text");

	Params::W_Text_C_ExecuteUbergraph_W_Text Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Text.W_Text_C.GetText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText*                            CurrentText_0                                          (Parm, OutParm)

void UW_Text_C::GetText(class FText* CurrentText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Text_C", "GetText");

	Params::W_Text_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentText_0 != nullptr)
		*CurrentText_0 = std::move(Parms.CurrentText_0);
}


// Function W_Text.W_Text_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Text_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Text_C", "PreConstruct");

	Params::W_Text_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Text.W_Text_C.SetFont
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FSlateFontInfo&            Font                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_Text_C::SetFont(const struct FSlateFontInfo& Font)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Text_C", "SetFont");

	Params::W_Text_C_SetFont Parms{};

	Parms.Font = std::move(Font);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Text.W_Text_C.SetFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FontSize_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Text_C::SetFontSize(int32 FontSize_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Text_C", "SetFontSize");

	Params::W_Text_C_SetFontSize Parms{};

	Parms.FontSize_0 = FontSize_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Text.W_Text_C.SetOutline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFontOutlineSettings&      FontOutlineSettings                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UW_Text_C::SetOutline(const struct FFontOutlineSettings& FontOutlineSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Text_C", "SetOutline");

	Params::W_Text_C_SetOutline Parms{};

	Parms.FontOutlineSettings = std::move(FontOutlineSettings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Text.W_Text_C.SetStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FST_Style_Text&            TextStyle_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_Text_C::SetStyle(const struct FST_Style_Text& TextStyle_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Text_C", "SetStyle");

	Params::W_Text_C_SetStyle Parms{};

	Parms.TextStyle_0 = std::move(TextStyle_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Text.W_Text_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Text_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Text_C::SetText(const class FText& Text_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Text_C", "SetText");

	Params::W_Text_C_SetText Parms{};

	Parms.Text_0 = std::move(Text_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Text.W_Text_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              Color_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Text_C::SetTextColor(const struct FLinearColor& Color_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Text_C", "SetTextColor");

	Params::W_Text_C_SetTextColor Parms{};

	Parms.Color_0 = std::move(Color_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Text.W_Text_C.SetTextJustification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETextJustify                            Justification_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Text_C::SetTextJustification(ETextJustify Justification_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Text_C", "SetTextJustification");

	Params::W_Text_C_SetTextJustification Parms{};

	Parms.Justification_0 = Justification_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Text.W_Text_C.SetTextLetterSpacing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LetterSpacing_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Text_C::SetTextLetterSpacing(int32 LetterSpacing_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Text_C", "SetTextLetterSpacing");

	Params::W_Text_C_SetTextLetterSpacing Parms{};

	Parms.LetterSpacing_0 = LetterSpacing_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Text.W_Text_C.SetTextShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector2D&                 ShadowOffset_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              ShadowColor_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Text_C::SetTextShadow(const struct FVector2D& ShadowOffset_0, const struct FLinearColor& ShadowColor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Text_C", "SetTextShadow");

	Params::W_Text_C_SetTextShadow Parms{};

	Parms.ShadowOffset_0 = std::move(ShadowOffset_0);
	Parms.ShadowColor_0 = std::move(ShadowColor_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Text.W_Text_C.SetTextTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETextTransformPolicy                    TextTransform                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Text_C::SetTextTransform(ETextTransformPolicy TextTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Text_C", "SetTextTransform");

	Params::W_Text_C_SetTextTransform Parms{};

	Parms.TextTransform = TextTransform;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Text.W_Text_C.TruncateText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Truncate_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CharacterLimit_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    TruncationCharacters_0                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText*                            TruncatedText                                          (Parm, OutParm)

void UW_Text_C::TruncateText(bool Truncate_0, int32 CharacterLimit_0, const class FString& TruncationCharacters_0, class FText* TruncatedText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Text_C", "TruncateText");

	Params::W_Text_C_TruncateText Parms{};

	Parms.Truncate_0 = Truncate_0;
	Parms.CharacterLimit_0 = CharacterLimit_0;
	Parms.TruncationCharacters_0 = std::move(TruncationCharacters_0);

	UObject::ProcessEvent(Func, &Parms);

	if (TruncatedText != nullptr)
		*TruncatedText = std::move(Parms.TruncatedText);
}


// Function W_Text.W_Text_C.UpdateFont
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FSlateFontInfo&            Font                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_Text_C::UpdateFont(const struct FSlateFontInfo& Font)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Text_C", "UpdateFont");

	Params::W_Text_C_UpdateFont Parms{};

	Parms.Font = std::move(Font);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Text.W_Text_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Text_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Text_C::UpdateText(const class FText& Text_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Text_C", "UpdateText");

	Params::W_Text_C_UpdateText Parms{};

	Parms.Text_0 = std::move(Text_0);

	UObject::ProcessEvent(Func, &Parms);
}

}

