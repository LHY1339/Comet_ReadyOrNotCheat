﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Briefing_Media_GalleryEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C
// 0x00C0 (0x16A0 - 0x15E0)
class UW_Briefing_Media_GalleryEntry_C final : public UCommonButtonImplementation
{
public:
	uint8                                         Pad_15D8[0x8];                                     // 0x15D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x15E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 img_Highlight;                                     // 0x15E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       img_Image;                                         // 0x15F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Size_Entry;                                        // 0x15F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMissionPhoto                          MissionPhotoData;                                  // 0x1600(0x0058)(Edit, BlueprintVisible, ExposeOnSpawn)
	TMulticastInlineDelegate<void(class UW_Briefing_Media_GalleryEntry_C* GalleryEntry)> OnClick;    // 0x1658(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTexture2D*                             Image;                                             // 0x1668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x1670(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bHighlighted;                                      // 0x1688(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1689[0x7];                                     // 0x1689(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class UW_Briefing_Media_GalleryEntry_C* Gallery_Entry)> OnSelect;  // 0x1690(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BP_OnClicked();
	void BP_OnHovered();
	void BP_OnSelected();
	void Construct();
	void ExecuteUbergraph_W_Briefing_Media_GalleryEntry(int32 EntryPoint);
	void SetHighlight(bool Highlighted);
	void SetSelected(bool Selected);
	void UpdateVisualStyle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Briefing_Media_GalleryEntry_C">();
	}
	static class UW_Briefing_Media_GalleryEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Briefing_Media_GalleryEntry_C>();
	}
};
static_assert(alignof(UW_Briefing_Media_GalleryEntry_C) == 0x000010, "Wrong alignment on UW_Briefing_Media_GalleryEntry_C");
static_assert(sizeof(UW_Briefing_Media_GalleryEntry_C) == 0x0016A0, "Wrong size on UW_Briefing_Media_GalleryEntry_C");
static_assert(offsetof(UW_Briefing_Media_GalleryEntry_C, UberGraphFrame) == 0x0015E0, "Member 'UW_Briefing_Media_GalleryEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Briefing_Media_GalleryEntry_C, img_Highlight) == 0x0015E8, "Member 'UW_Briefing_Media_GalleryEntry_C::img_Highlight' has a wrong offset!");
static_assert(offsetof(UW_Briefing_Media_GalleryEntry_C, img_Image) == 0x0015F0, "Member 'UW_Briefing_Media_GalleryEntry_C::img_Image' has a wrong offset!");
static_assert(offsetof(UW_Briefing_Media_GalleryEntry_C, Size_Entry) == 0x0015F8, "Member 'UW_Briefing_Media_GalleryEntry_C::Size_Entry' has a wrong offset!");
static_assert(offsetof(UW_Briefing_Media_GalleryEntry_C, MissionPhotoData) == 0x001600, "Member 'UW_Briefing_Media_GalleryEntry_C::MissionPhotoData' has a wrong offset!");
static_assert(offsetof(UW_Briefing_Media_GalleryEntry_C, OnClick) == 0x001658, "Member 'UW_Briefing_Media_GalleryEntry_C::OnClick' has a wrong offset!");
static_assert(offsetof(UW_Briefing_Media_GalleryEntry_C, Image) == 0x001668, "Member 'UW_Briefing_Media_GalleryEntry_C::Image' has a wrong offset!");
static_assert(offsetof(UW_Briefing_Media_GalleryEntry_C, Title) == 0x001670, "Member 'UW_Briefing_Media_GalleryEntry_C::Title' has a wrong offset!");
static_assert(offsetof(UW_Briefing_Media_GalleryEntry_C, bHighlighted) == 0x001688, "Member 'UW_Briefing_Media_GalleryEntry_C::bHighlighted' has a wrong offset!");
static_assert(offsetof(UW_Briefing_Media_GalleryEntry_C, OnSelect) == 0x001690, "Member 'UW_Briefing_Media_GalleryEntry_C::OnSelect' has a wrong offset!");

}

