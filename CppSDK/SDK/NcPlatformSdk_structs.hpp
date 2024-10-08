#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NcPlatformSdk

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum NcPlatformSdk.EPlayncURLType
// NumValues: 0x0003
enum class EPlayncURLType : uint8
{
	VE_SignUp                                = 0,
	VE_FindAccount                           = 1,
	VE_MAX                                   = 2,
};

// Enum NcPlatformSdk.ENcModalWidgetClosedReason
// NumValues: 0x0003
enum class ENcModalWidgetClosedReason : uint8
{
	UserCanceled                             = 0,
	UnexpectedReason                         = 1,
	ENcModalWidgetClosedReason_MAX           = 2,
};

// Enum NcPlatformSdk.ENcWidgetBorderType
// NumValues: 0x0007
enum class ENcWidgetBorderType : uint8
{
	Round                                    = 0,
	Square                                   = 1,
	TopRound                                 = 2,
	BottomRound                              = 3,
	LeftBottomRound                          = 4,
	RightBottomRound                         = 5,
	ENcWidgetBorderType_MAX                  = 6,
};

// Enum NcPlatformSdk.ENcWidgetColorType
// NumValues: 0x0004
enum class ENcWidgetColorType : uint8
{
	None                                     = 0,
	Dark                                     = 1,
	Light                                    = 2,
	ENcWidgetColorType_MAX                   = 3,
};

// Enum NcPlatformSdk.ENcWidgetStyleType
// NumValues: 0x0004
enum class ENcWidgetStyleType : uint8
{
	None                                     = 0,
	Style1                                   = 1,
	Style2                                   = 2,
	ENcWidgetStyleType_MAX                   = 3,
};

// Enum NcPlatformSdk.ESDKSaveSlotType
// NumValues: 0x0003
enum class ESDKSaveSlotType : uint8
{
	Default                                  = 0,
	AppIdOnly                                = 1,
	ESDKSaveSlotType_MAX                     = 2,
};

// ScriptStruct NcPlatformSdk.AnimationDialogAnimation
// 0x0018 (0x0018 - 0x0000)
struct FAnimationDialogAnimation final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EUMGSequencePlayMode                          PlayModeType;                                      // 0x0010(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAnimationDialogAnimation) == 0x000008, "Wrong alignment on FAnimationDialogAnimation");
static_assert(sizeof(FAnimationDialogAnimation) == 0x000018, "Wrong size on FAnimationDialogAnimation");
static_assert(offsetof(FAnimationDialogAnimation, Name) == 0x000000, "Member 'FAnimationDialogAnimation::Name' has a wrong offset!");
static_assert(offsetof(FAnimationDialogAnimation, PlayModeType) == 0x000010, "Member 'FAnimationDialogAnimation::PlayModeType' has a wrong offset!");

// ScriptStruct NcPlatformSdk.NcPhoneNumberCountry
// 0x0030 (0x0030 - 0x0000)
struct FNcPhoneNumberCountry final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Code;                                              // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Number;                                            // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNcPhoneNumberCountry) == 0x000008, "Wrong alignment on FNcPhoneNumberCountry");
static_assert(sizeof(FNcPhoneNumberCountry) == 0x000030, "Wrong size on FNcPhoneNumberCountry");
static_assert(offsetof(FNcPhoneNumberCountry, Name) == 0x000000, "Member 'FNcPhoneNumberCountry::Name' has a wrong offset!");
static_assert(offsetof(FNcPhoneNumberCountry, Code) == 0x000010, "Member 'FNcPhoneNumberCountry::Code' has a wrong offset!");
static_assert(offsetof(FNcPhoneNumberCountry, Number) == 0x000020, "Member 'FNcPhoneNumberCountry::Number' has a wrong offset!");

// ScriptStruct NcPlatformSdk.NcPhoneNumberCountryList
// 0x0010 (0x0018 - 0x0008)
struct FNcPhoneNumberCountryList final : public FTableRowBase
{
public:
	TArray<struct FNcPhoneNumberCountry>          List;                                              // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNcPhoneNumberCountryList) == 0x000008, "Wrong alignment on FNcPhoneNumberCountryList");
static_assert(sizeof(FNcPhoneNumberCountryList) == 0x000018, "Wrong size on FNcPhoneNumberCountryList");
static_assert(offsetof(FNcPhoneNumberCountryList, List) == 0x000008, "Member 'FNcPhoneNumberCountryList::List' has a wrong offset!");

// ScriptStruct NcPlatformSdk.NcWidgetColor
// 0x0180 (0x0188 - 0x0008)
struct FNcWidgetColor final : public FTableRowBase
{
public:
	class FString                                 Background;                                        // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Box;                                               // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InnerBox;                                          // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InputfieldBox;                                     // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Line1;                                             // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Line2;                                             // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Button1;                                           // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Button1Hovered;                                    // 0x0078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Button1Pressed;                                    // 0x0088(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Button1Disabled;                                   // 0x0098(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Button2;                                           // 0x00A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Button2Hovered;                                    // 0x00B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Button2Pressed;                                    // 0x00C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Button2Disabled;                                   // 0x00D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Button3;                                           // 0x00E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Button3Hovered;                                    // 0x00F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Button3Pressed;                                    // 0x0108(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Text1;                                             // 0x0118(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Text2;                                             // 0x0128(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ButtonText1;                                       // 0x0138(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ButtonText2;                                       // 0x0148(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PointText;                                         // 0x0158(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TextHovered;                                       // 0x0168(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ErrorText;                                         // 0x0178(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNcWidgetColor) == 0x000008, "Wrong alignment on FNcWidgetColor");
static_assert(sizeof(FNcWidgetColor) == 0x000188, "Wrong size on FNcWidgetColor");
static_assert(offsetof(FNcWidgetColor, Background) == 0x000008, "Member 'FNcWidgetColor::Background' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, Box) == 0x000018, "Member 'FNcWidgetColor::Box' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, InnerBox) == 0x000028, "Member 'FNcWidgetColor::InnerBox' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, InputfieldBox) == 0x000038, "Member 'FNcWidgetColor::InputfieldBox' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, Line1) == 0x000048, "Member 'FNcWidgetColor::Line1' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, Line2) == 0x000058, "Member 'FNcWidgetColor::Line2' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, Button1) == 0x000068, "Member 'FNcWidgetColor::Button1' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, Button1Hovered) == 0x000078, "Member 'FNcWidgetColor::Button1Hovered' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, Button1Pressed) == 0x000088, "Member 'FNcWidgetColor::Button1Pressed' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, Button1Disabled) == 0x000098, "Member 'FNcWidgetColor::Button1Disabled' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, Button2) == 0x0000A8, "Member 'FNcWidgetColor::Button2' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, Button2Hovered) == 0x0000B8, "Member 'FNcWidgetColor::Button2Hovered' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, Button2Pressed) == 0x0000C8, "Member 'FNcWidgetColor::Button2Pressed' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, Button2Disabled) == 0x0000D8, "Member 'FNcWidgetColor::Button2Disabled' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, Button3) == 0x0000E8, "Member 'FNcWidgetColor::Button3' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, Button3Hovered) == 0x0000F8, "Member 'FNcWidgetColor::Button3Hovered' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, Button3Pressed) == 0x000108, "Member 'FNcWidgetColor::Button3Pressed' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, Text1) == 0x000118, "Member 'FNcWidgetColor::Text1' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, Text2) == 0x000128, "Member 'FNcWidgetColor::Text2' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, ButtonText1) == 0x000138, "Member 'FNcWidgetColor::ButtonText1' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, ButtonText2) == 0x000148, "Member 'FNcWidgetColor::ButtonText2' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, PointText) == 0x000158, "Member 'FNcWidgetColor::PointText' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, TextHovered) == 0x000168, "Member 'FNcWidgetColor::TextHovered' has a wrong offset!");
static_assert(offsetof(FNcWidgetColor, ErrorText) == 0x000178, "Member 'FNcWidgetColor::ErrorText' has a wrong offset!");

// ScriptStruct NcPlatformSdk.NcWidgetStyle
// 0x0060 (0x0068 - 0x0008)
struct FNcWidgetStyle final : public FTableRowBase
{
public:
	struct FMargin                                BorderPadding;                                     // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                TitleSectionPadding;                               // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         TitleTextSize;                                     // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ContentCornerRadius;                               // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ContentWidth;                                      // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                ContentSectionPadding;                             // 0x0034(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bIsBackgroundTransparent;                          // 0x0044(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ButtonsSpacing;                                    // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ButtonCornerRadius;                                // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ButtonsHeight;                                     // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ButtonsTextSize;                                   // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                ButtonSectionPadding;                              // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNcWidgetStyle) == 0x000008, "Wrong alignment on FNcWidgetStyle");
static_assert(sizeof(FNcWidgetStyle) == 0x000068, "Wrong size on FNcWidgetStyle");
static_assert(offsetof(FNcWidgetStyle, BorderPadding) == 0x000008, "Member 'FNcWidgetStyle::BorderPadding' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyle, TitleSectionPadding) == 0x000018, "Member 'FNcWidgetStyle::TitleSectionPadding' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyle, TitleTextSize) == 0x000028, "Member 'FNcWidgetStyle::TitleTextSize' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyle, ContentCornerRadius) == 0x00002C, "Member 'FNcWidgetStyle::ContentCornerRadius' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyle, ContentWidth) == 0x000030, "Member 'FNcWidgetStyle::ContentWidth' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyle, ContentSectionPadding) == 0x000034, "Member 'FNcWidgetStyle::ContentSectionPadding' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyle, bIsBackgroundTransparent) == 0x000044, "Member 'FNcWidgetStyle::bIsBackgroundTransparent' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyle, ButtonsSpacing) == 0x000048, "Member 'FNcWidgetStyle::ButtonsSpacing' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyle, ButtonCornerRadius) == 0x00004C, "Member 'FNcWidgetStyle::ButtonCornerRadius' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyle, ButtonsHeight) == 0x000050, "Member 'FNcWidgetStyle::ButtonsHeight' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyle, ButtonsTextSize) == 0x000054, "Member 'FNcWidgetStyle::ButtonsTextSize' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyle, ButtonSectionPadding) == 0x000058, "Member 'FNcWidgetStyle::ButtonSectionPadding' has a wrong offset!");

// ScriptStruct NcPlatformSdk.NcWidgetStyleOverrideSettings
// 0x0078 (0x0078 - 0x0000)
struct FNcWidgetStyleOverrideSettings final
{
public:
	bool                                          bOverrideBorderPadding;                            // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideTitleSectionPadding;                      // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideTitleTextSize;                            // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideContentCornerRadius;                      // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideContentWidth;                             // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideContentSectionPadding;                    // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideBackgroundTransparent;                    // 0x0006(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideButtonsSpacing;                           // 0x0007(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideButtonCornerRadius;                       // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideButtonsHeight;                            // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideButtonsTextSize;                          // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideButtonSectionPadding;                     // 0x000B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNcWidgetStyle                         OverrideStyle;                                     // 0x0010(0x0068)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNcWidgetStyleOverrideSettings) == 0x000008, "Wrong alignment on FNcWidgetStyleOverrideSettings");
static_assert(sizeof(FNcWidgetStyleOverrideSettings) == 0x000078, "Wrong size on FNcWidgetStyleOverrideSettings");
static_assert(offsetof(FNcWidgetStyleOverrideSettings, bOverrideBorderPadding) == 0x000000, "Member 'FNcWidgetStyleOverrideSettings::bOverrideBorderPadding' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyleOverrideSettings, bOverrideTitleSectionPadding) == 0x000001, "Member 'FNcWidgetStyleOverrideSettings::bOverrideTitleSectionPadding' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyleOverrideSettings, bOverrideTitleTextSize) == 0x000002, "Member 'FNcWidgetStyleOverrideSettings::bOverrideTitleTextSize' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyleOverrideSettings, bOverrideContentCornerRadius) == 0x000003, "Member 'FNcWidgetStyleOverrideSettings::bOverrideContentCornerRadius' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyleOverrideSettings, bOverrideContentWidth) == 0x000004, "Member 'FNcWidgetStyleOverrideSettings::bOverrideContentWidth' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyleOverrideSettings, bOverrideContentSectionPadding) == 0x000005, "Member 'FNcWidgetStyleOverrideSettings::bOverrideContentSectionPadding' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyleOverrideSettings, bOverrideBackgroundTransparent) == 0x000006, "Member 'FNcWidgetStyleOverrideSettings::bOverrideBackgroundTransparent' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyleOverrideSettings, bOverrideButtonsSpacing) == 0x000007, "Member 'FNcWidgetStyleOverrideSettings::bOverrideButtonsSpacing' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyleOverrideSettings, bOverrideButtonCornerRadius) == 0x000008, "Member 'FNcWidgetStyleOverrideSettings::bOverrideButtonCornerRadius' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyleOverrideSettings, bOverrideButtonsHeight) == 0x000009, "Member 'FNcWidgetStyleOverrideSettings::bOverrideButtonsHeight' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyleOverrideSettings, bOverrideButtonsTextSize) == 0x00000A, "Member 'FNcWidgetStyleOverrideSettings::bOverrideButtonsTextSize' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyleOverrideSettings, bOverrideButtonSectionPadding) == 0x00000B, "Member 'FNcWidgetStyleOverrideSettings::bOverrideButtonSectionPadding' has a wrong offset!");
static_assert(offsetof(FNcWidgetStyleOverrideSettings, OverrideStyle) == 0x000010, "Member 'FNcWidgetStyleOverrideSettings::OverrideStyle' has a wrong offset!");

}

