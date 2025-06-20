﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WinLibScePad

#include "Basic.hpp"

#include "AudioExtensions_classes.hpp"


namespace SDK
{

// Class WinLibScePad.DualShockExternalEndpointSettings
// 0x0008 (0x0030 - 0x0028)
class UDualShockExternalEndpointSettings final : public UAudioEndpointSettingsBase
{
public:
	int32                                         ControllerIndex;                                   // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DualShockExternalEndpointSettings">();
	}
	static class UDualShockExternalEndpointSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDualShockExternalEndpointSettings>();
	}
};
static_assert(alignof(UDualShockExternalEndpointSettings) == 0x000008, "Wrong alignment on UDualShockExternalEndpointSettings");
static_assert(sizeof(UDualShockExternalEndpointSettings) == 0x000030, "Wrong size on UDualShockExternalEndpointSettings");
static_assert(offsetof(UDualShockExternalEndpointSettings, ControllerIndex) == 0x000028, "Member 'UDualShockExternalEndpointSettings::ControllerIndex' has a wrong offset!");

// Class WinLibScePad.DualShockSoundfieldEndpointSettings
// 0x0008 (0x0030 - 0x0028)
class UDualShockSoundfieldEndpointSettings final : public USoundfieldEndpointSettingsBase
{
public:
	int32                                         ControllerIndex;                                   // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DualShockSoundfieldEndpointSettings">();
	}
	static class UDualShockSoundfieldEndpointSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDualShockSoundfieldEndpointSettings>();
	}
};
static_assert(alignof(UDualShockSoundfieldEndpointSettings) == 0x000008, "Wrong alignment on UDualShockSoundfieldEndpointSettings");
static_assert(sizeof(UDualShockSoundfieldEndpointSettings) == 0x000030, "Wrong size on UDualShockSoundfieldEndpointSettings");
static_assert(offsetof(UDualShockSoundfieldEndpointSettings, ControllerIndex) == 0x000028, "Member 'UDualShockSoundfieldEndpointSettings::ControllerIndex' has a wrong offset!");

// Class WinLibScePad.DualShockSpatializationSettings
// 0x0010 (0x0038 - 0x0028)
class UDualShockSpatializationSettings final : public USoundfieldEncodingSettingsBase
{
public:
	float                                         Spread;                                            // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Priority;                                          // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PassThrough;                                       // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DualShockSpatializationSettings">();
	}
	static class UDualShockSpatializationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDualShockSpatializationSettings>();
	}
};
static_assert(alignof(UDualShockSpatializationSettings) == 0x000008, "Wrong alignment on UDualShockSpatializationSettings");
static_assert(sizeof(UDualShockSpatializationSettings) == 0x000038, "Wrong size on UDualShockSpatializationSettings");
static_assert(offsetof(UDualShockSpatializationSettings, Spread) == 0x000028, "Member 'UDualShockSpatializationSettings::Spread' has a wrong offset!");
static_assert(offsetof(UDualShockSpatializationSettings, Priority) == 0x00002C, "Member 'UDualShockSpatializationSettings::Priority' has a wrong offset!");
static_assert(offsetof(UDualShockSpatializationSettings, PassThrough) == 0x000030, "Member 'UDualShockSpatializationSettings::PassThrough' has a wrong offset!");

}

