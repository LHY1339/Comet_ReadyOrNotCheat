﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_StandardSlider

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "StandardSliderTypes_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_StandardSlider.W_StandardSlider_C
// 0x0148 (0x0408 - 0x02C0)
class UW_StandardSlider_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                HighlightButton;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_71;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_136;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SliderValueText;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                TheSlider;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DescriptionTextWidget;                             // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   Description;                                       // 0x02F8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	EStandardSliderTypes                          SliderType;                                        // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SliderFloatMin;                                    // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         SliderIntegerMin;                                  // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         SliderIntegerMax;                                  // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         SliderIntegerStep;                                 // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_32C[0x4];                                      // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SliderFloatMax;                                    // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        SliderFloatStep;                                   // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        PreviewFloatValue;                                 // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        FloatValue;                                        // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         IntegerValue;                                      // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         QualityValue;                                      // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PreviewIntegerValue;                               // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         PreviewQualityValue;                               // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(double NewFloatValue, double NewSliderValue)> OnFloatValueChanged; // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(int32 NewIntegerValue, double NewSliderValue)> OnIntegralValueChanged; // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(int32 NewQualityValue, double NewSliderValue)> OnQualityValueChanged; // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bDisplayAsPercent;                                 // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_391[0x7];                                      // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   PercentageFormat;                                  // 0x0398(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         SupportedResolutions;                              // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 ResolutionValue;                                   // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(const class FString& NewResolutionValue, double NewSliderValue)> OnResolutionValueChanged; // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          SnapToGrid;                                        // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3E1[0x7];                                      // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(int32 NewIntegerValue, double NewSliderValue)> OnDlssValueChanged; // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        SliderTextSizeRatio;                               // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bCompatibility_WasUserInput;                       // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddFloatValue(double Value, double* NewValue);
	void AddIntegralValue(int32 Value, int32* NewValue);
	void BndEvt__TheSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__TheSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__TheSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_W_StandardSlider(int32 EntryPoint);
	class UWidget* Navigate_Left(EUINavigation Navigation_0);
	class UWidget* Navigate_Right(EUINavigation Navigation_0);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void SetDLSSQualityValue(int32 NewQuality);
	void SetFloatValue(double NewFloat, double* NewValue);
	void SetFrameGenerationValue(int32 NewQuality);
	void SetFSRQualityValue(int32 NewQuality);
	void SetIntegralValue(int32 NewInteger, int32* NewValue);
	void SetQualityValue(int32 NewQuality);
	void SetResolutionValue(const class FString& Resolution);
	void SetupDescription();
	void UpdateSliderText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_StandardSlider_C">();
	}
	static class UW_StandardSlider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_StandardSlider_C>();
	}
};
static_assert(alignof(UW_StandardSlider_C) == 0x000008, "Wrong alignment on UW_StandardSlider_C");
static_assert(sizeof(UW_StandardSlider_C) == 0x000408, "Wrong size on UW_StandardSlider_C");
static_assert(offsetof(UW_StandardSlider_C, UberGraphFrame) == 0x0002C0, "Member 'UW_StandardSlider_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, HighlightButton) == 0x0002C8, "Member 'UW_StandardSlider_C::HighlightButton' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, ProgressBar_71) == 0x0002D0, "Member 'UW_StandardSlider_C::ProgressBar_71' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, ScaleBox_136) == 0x0002D8, "Member 'UW_StandardSlider_C::ScaleBox_136' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, SliderValueText) == 0x0002E0, "Member 'UW_StandardSlider_C::SliderValueText' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, TheSlider) == 0x0002E8, "Member 'UW_StandardSlider_C::TheSlider' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, DescriptionTextWidget) == 0x0002F0, "Member 'UW_StandardSlider_C::DescriptionTextWidget' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, Description) == 0x0002F8, "Member 'UW_StandardSlider_C::Description' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, SliderType) == 0x000310, "Member 'UW_StandardSlider_C::SliderType' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, SliderFloatMin) == 0x000318, "Member 'UW_StandardSlider_C::SliderFloatMin' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, SliderIntegerMin) == 0x000320, "Member 'UW_StandardSlider_C::SliderIntegerMin' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, SliderIntegerMax) == 0x000324, "Member 'UW_StandardSlider_C::SliderIntegerMax' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, SliderIntegerStep) == 0x000328, "Member 'UW_StandardSlider_C::SliderIntegerStep' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, SliderFloatMax) == 0x000330, "Member 'UW_StandardSlider_C::SliderFloatMax' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, SliderFloatStep) == 0x000338, "Member 'UW_StandardSlider_C::SliderFloatStep' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, PreviewFloatValue) == 0x000340, "Member 'UW_StandardSlider_C::PreviewFloatValue' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, FloatValue) == 0x000348, "Member 'UW_StandardSlider_C::FloatValue' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, IntegerValue) == 0x000350, "Member 'UW_StandardSlider_C::IntegerValue' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, QualityValue) == 0x000354, "Member 'UW_StandardSlider_C::QualityValue' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, PreviewIntegerValue) == 0x000358, "Member 'UW_StandardSlider_C::PreviewIntegerValue' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, PreviewQualityValue) == 0x00035C, "Member 'UW_StandardSlider_C::PreviewQualityValue' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, OnFloatValueChanged) == 0x000360, "Member 'UW_StandardSlider_C::OnFloatValueChanged' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, OnIntegralValueChanged) == 0x000370, "Member 'UW_StandardSlider_C::OnIntegralValueChanged' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, OnQualityValueChanged) == 0x000380, "Member 'UW_StandardSlider_C::OnQualityValueChanged' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, bDisplayAsPercent) == 0x000390, "Member 'UW_StandardSlider_C::bDisplayAsPercent' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, PercentageFormat) == 0x000398, "Member 'UW_StandardSlider_C::PercentageFormat' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, SupportedResolutions) == 0x0003B0, "Member 'UW_StandardSlider_C::SupportedResolutions' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, ResolutionValue) == 0x0003C0, "Member 'UW_StandardSlider_C::ResolutionValue' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, OnResolutionValueChanged) == 0x0003D0, "Member 'UW_StandardSlider_C::OnResolutionValueChanged' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, SnapToGrid) == 0x0003E0, "Member 'UW_StandardSlider_C::SnapToGrid' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, OnDlssValueChanged) == 0x0003E8, "Member 'UW_StandardSlider_C::OnDlssValueChanged' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, SliderTextSizeRatio) == 0x0003F8, "Member 'UW_StandardSlider_C::SliderTextSizeRatio' has a wrong offset!");
static_assert(offsetof(UW_StandardSlider_C, bCompatibility_WasUserInput) == 0x000400, "Member 'UW_StandardSlider_C::bCompatibility_WasUserInput' has a wrong offset!");

}

