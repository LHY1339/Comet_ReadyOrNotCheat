﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Briefing_Media_GalleryEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.ExecuteUbergraph_W_Briefing_Media_GalleryEntry
// 0x0004 (0x0004 - 0x0000)
struct W_Briefing_Media_GalleryEntry_C_ExecuteUbergraph_W_Briefing_Media_GalleryEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_Media_GalleryEntry_C_ExecuteUbergraph_W_Briefing_Media_GalleryEntry) == 0x000004, "Wrong alignment on W_Briefing_Media_GalleryEntry_C_ExecuteUbergraph_W_Briefing_Media_GalleryEntry");
static_assert(sizeof(W_Briefing_Media_GalleryEntry_C_ExecuteUbergraph_W_Briefing_Media_GalleryEntry) == 0x000004, "Wrong size on W_Briefing_Media_GalleryEntry_C_ExecuteUbergraph_W_Briefing_Media_GalleryEntry");
static_assert(offsetof(W_Briefing_Media_GalleryEntry_C_ExecuteUbergraph_W_Briefing_Media_GalleryEntry, EntryPoint) == 0x000000, "Member 'W_Briefing_Media_GalleryEntry_C_ExecuteUbergraph_W_Briefing_Media_GalleryEntry::EntryPoint' has a wrong offset!");

// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.SetHighlight
// 0x0001 (0x0001 - 0x0000)
struct W_Briefing_Media_GalleryEntry_C_SetHighlight final
{
public:
	bool                                          Highlighted;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_Media_GalleryEntry_C_SetHighlight) == 0x000001, "Wrong alignment on W_Briefing_Media_GalleryEntry_C_SetHighlight");
static_assert(sizeof(W_Briefing_Media_GalleryEntry_C_SetHighlight) == 0x000001, "Wrong size on W_Briefing_Media_GalleryEntry_C_SetHighlight");
static_assert(offsetof(W_Briefing_Media_GalleryEntry_C_SetHighlight, Highlighted) == 0x000000, "Member 'W_Briefing_Media_GalleryEntry_C_SetHighlight::Highlighted' has a wrong offset!");

// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.SetSelected
// 0x0001 (0x0001 - 0x0000)
struct W_Briefing_Media_GalleryEntry_C_SetSelected final
{
public:
	bool                                          Selected;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_Media_GalleryEntry_C_SetSelected) == 0x000001, "Wrong alignment on W_Briefing_Media_GalleryEntry_C_SetSelected");
static_assert(sizeof(W_Briefing_Media_GalleryEntry_C_SetSelected) == 0x000001, "Wrong size on W_Briefing_Media_GalleryEntry_C_SetSelected");
static_assert(offsetof(W_Briefing_Media_GalleryEntry_C_SetSelected, Selected) == 0x000000, "Member 'W_Briefing_Media_GalleryEntry_C_SetSelected::Selected' has a wrong offset!");

// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.UpdateVisualStyle
// 0x0064 (0x0064 - 0x0000)
struct W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSelected_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSelected_ReturnValue_1;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetColorByName_LinearColor;               // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            CallFunc_GetColorByName_SlateColor;                // 0x0018(0x0014)()
	struct FLinearColor                           CallFunc_GetColorByName_LinearColor_1;             // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            CallFunc_GetColorByName_SlateColor_1;              // 0x003C(0x0014)()
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle) == 0x000004, "Wrong alignment on W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle");
static_assert(sizeof(W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle) == 0x000064, "Wrong size on W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle");
static_assert(offsetof(W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle, Temp_bool_Variable) == 0x000000, "Member 'W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle, Temp_byte_Variable) == 0x000001, "Member 'W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle, Temp_byte_Variable_1) == 0x000002, "Member 'W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle, CallFunc_GetSelected_ReturnValue) == 0x000003, "Member 'W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle, CallFunc_GetSelected_ReturnValue_1) == 0x000004, "Member 'W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle::CallFunc_GetSelected_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle, CallFunc_GetColorByName_LinearColor) == 0x000008, "Member 'W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle::CallFunc_GetColorByName_LinearColor' has a wrong offset!");
static_assert(offsetof(W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle, CallFunc_GetColorByName_SlateColor) == 0x000018, "Member 'W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle::CallFunc_GetColorByName_SlateColor' has a wrong offset!");
static_assert(offsetof(W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle, CallFunc_GetColorByName_LinearColor_1) == 0x00002C, "Member 'W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle::CallFunc_GetColorByName_LinearColor_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle, CallFunc_GetColorByName_SlateColor_1) == 0x00003C, "Member 'W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle::CallFunc_GetColorByName_SlateColor_1' has a wrong offset!");
static_assert(offsetof(W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle, CallFunc_SelectColor_ReturnValue) == 0x000050, "Member 'W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle, CallFunc_BooleanOR_ReturnValue) == 0x000060, "Member 'W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle, K2Node_Select_Default) == 0x000061, "Member 'W_Briefing_Media_GalleryEntry_C_UpdateVisualStyle::K2Node_Select_Default' has a wrong offset!");

}

