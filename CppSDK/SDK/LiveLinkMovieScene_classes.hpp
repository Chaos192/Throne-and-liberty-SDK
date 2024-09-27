#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLinkMovieScene

#include "Basic.hpp"

#include "LiveLinkInterface_structs.hpp"
#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"
#include "LiveLinkMovieScene_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "MovieSceneTracks_classes.hpp"


namespace SDK
{

// Class LiveLinkMovieScene.MovieSceneLiveLinkSection
// 0x0140 (0x0228 - 0x00E8)
class UMovieSceneLiveLinkSection final : public UMovieSceneSection
{
public:
	struct FLiveLinkSubjectPreset                 SubjectPreset;                                     // 0x00E8(0x0038)(NoDestructor, NativeAccessSpecifierPublic)
	TArray<bool>                                  ChannelMask;                                       // 0x0120(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneLiveLinkSubSection*>  SubSections;                                       // 0x0130(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_140[0x10];                                     // 0x0140(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SubjectName;                                       // 0x0150(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkFrameData                     TemplateToPush;                                    // 0x0158(0x0090)(Deprecated, NativeAccessSpecifierPublic)
	struct FLiveLinkRefSkeleton                   RefSkeleton;                                       // 0x01E8(0x0020)(Deprecated, NativeAccessSpecifierPublic)
	TArray<class FName>                           CurveNames;                                        // 0x0208(0x0010)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneFloatChannel>        PropertyFloatChannels;                             // 0x0218(0x0010)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneLiveLinkSection">();
	}
	static class UMovieSceneLiveLinkSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneLiveLinkSection>();
	}
};
static_assert(alignof(UMovieSceneLiveLinkSection) == 0x000008, "Wrong alignment on UMovieSceneLiveLinkSection");
static_assert(sizeof(UMovieSceneLiveLinkSection) == 0x000228, "Wrong size on UMovieSceneLiveLinkSection");
static_assert(offsetof(UMovieSceneLiveLinkSection, SubjectPreset) == 0x0000E8, "Member 'UMovieSceneLiveLinkSection::SubjectPreset' has a wrong offset!");
static_assert(offsetof(UMovieSceneLiveLinkSection, ChannelMask) == 0x000120, "Member 'UMovieSceneLiveLinkSection::ChannelMask' has a wrong offset!");
static_assert(offsetof(UMovieSceneLiveLinkSection, SubSections) == 0x000130, "Member 'UMovieSceneLiveLinkSection::SubSections' has a wrong offset!");
static_assert(offsetof(UMovieSceneLiveLinkSection, SubjectName) == 0x000150, "Member 'UMovieSceneLiveLinkSection::SubjectName' has a wrong offset!");
static_assert(offsetof(UMovieSceneLiveLinkSection, TemplateToPush) == 0x000158, "Member 'UMovieSceneLiveLinkSection::TemplateToPush' has a wrong offset!");
static_assert(offsetof(UMovieSceneLiveLinkSection, RefSkeleton) == 0x0001E8, "Member 'UMovieSceneLiveLinkSection::RefSkeleton' has a wrong offset!");
static_assert(offsetof(UMovieSceneLiveLinkSection, CurveNames) == 0x000208, "Member 'UMovieSceneLiveLinkSection::CurveNames' has a wrong offset!");
static_assert(offsetof(UMovieSceneLiveLinkSection, PropertyFloatChannels) == 0x000218, "Member 'UMovieSceneLiveLinkSection::PropertyFloatChannels' has a wrong offset!");

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
// 0x0028 (0x0050 - 0x0028)
class UMovieSceneLiveLinkSubSection : public UObject
{
public:
	struct FLiveLinkSubSectionData                SubSectionData;                                    // 0x0028(0x0010)(NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRole>              SubjectRole;                                       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_40[0x10];                                      // 0x0040(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneLiveLinkSubSection">();
	}
	static class UMovieSceneLiveLinkSubSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneLiveLinkSubSection>();
	}
};
static_assert(alignof(UMovieSceneLiveLinkSubSection) == 0x000008, "Wrong alignment on UMovieSceneLiveLinkSubSection");
static_assert(sizeof(UMovieSceneLiveLinkSubSection) == 0x000050, "Wrong size on UMovieSceneLiveLinkSubSection");
static_assert(offsetof(UMovieSceneLiveLinkSubSection, SubSectionData) == 0x000028, "Member 'UMovieSceneLiveLinkSubSection::SubSectionData' has a wrong offset!");
static_assert(offsetof(UMovieSceneLiveLinkSubSection, SubjectRole) == 0x000038, "Member 'UMovieSceneLiveLinkSubSection::SubjectRole' has a wrong offset!");

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
// 0x0010 (0x0060 - 0x0050)
class UMovieSceneLiveLinkSubSectionAnimation final : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                         Pad_50[0x10];                                      // 0x0050(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneLiveLinkSubSectionAnimation">();
	}
	static class UMovieSceneLiveLinkSubSectionAnimation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneLiveLinkSubSectionAnimation>();
	}
};
static_assert(alignof(UMovieSceneLiveLinkSubSectionAnimation) == 0x000008, "Wrong alignment on UMovieSceneLiveLinkSubSectionAnimation");
static_assert(sizeof(UMovieSceneLiveLinkSubSectionAnimation) == 0x000060, "Wrong size on UMovieSceneLiveLinkSubSectionAnimation");

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
// 0x0010 (0x0060 - 0x0050)
class UMovieSceneLiveLinkSubSectionBasicRole final : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                         Pad_50[0x10];                                      // 0x0050(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneLiveLinkSubSectionBasicRole">();
	}
	static class UMovieSceneLiveLinkSubSectionBasicRole* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneLiveLinkSubSectionBasicRole>();
	}
};
static_assert(alignof(UMovieSceneLiveLinkSubSectionBasicRole) == 0x000008, "Wrong alignment on UMovieSceneLiveLinkSubSectionBasicRole");
static_assert(sizeof(UMovieSceneLiveLinkSubSectionBasicRole) == 0x000060, "Wrong size on UMovieSceneLiveLinkSubSectionBasicRole");

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
// 0x0010 (0x0060 - 0x0050)
class UMovieSceneLiveLinkSubSectionProperties final : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                         Pad_50[0x10];                                      // 0x0050(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneLiveLinkSubSectionProperties">();
	}
	static class UMovieSceneLiveLinkSubSectionProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneLiveLinkSubSectionProperties>();
	}
};
static_assert(alignof(UMovieSceneLiveLinkSubSectionProperties) == 0x000008, "Wrong alignment on UMovieSceneLiveLinkSubSectionProperties");
static_assert(sizeof(UMovieSceneLiveLinkSubSectionProperties) == 0x000060, "Wrong size on UMovieSceneLiveLinkSubSectionProperties");

// Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneLiveLinkTrack final : public UMovieScenePropertyTrack
{
public:
	uint8                                         Pad_C0[0x8];                                       // 0x00C0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class ULiveLinkRole>              TrackRole;                                         // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneLiveLinkTrack">();
	}
	static class UMovieSceneLiveLinkTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneLiveLinkTrack>();
	}
};
static_assert(alignof(UMovieSceneLiveLinkTrack) == 0x000008, "Wrong alignment on UMovieSceneLiveLinkTrack");
static_assert(sizeof(UMovieSceneLiveLinkTrack) == 0x0000D0, "Wrong size on UMovieSceneLiveLinkTrack");
static_assert(offsetof(UMovieSceneLiveLinkTrack, TrackRole) == 0x0000C8, "Member 'UMovieSceneLiveLinkTrack::TrackRole' has a wrong offset!");

}

