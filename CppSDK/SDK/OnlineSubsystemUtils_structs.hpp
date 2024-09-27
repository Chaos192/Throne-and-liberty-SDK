#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemUtils

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum OnlineSubsystemUtils.EInAppPurchaseStatus
// NumValues: 0x0007
enum class EInAppPurchaseStatus : uint8
{
	Invalid                                  = 0,
	Failed                                   = 1,
	Deferred                                 = 2,
	Canceled                                 = 3,
	Purchased                                = 4,
	Restored                                 = 5,
	EInAppPurchaseStatus_MAX                 = 6,
};

// Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
// NumValues: 0x0005
enum class EOnlineProxyStoreOfferDiscountType : uint8
{
	NotOnSale                                = 0,
	Percentage                               = 1,
	DiscountAmount                           = 2,
	PayAmount                                = 3,
	EOnlineProxyStoreOfferDiscountType_MAX   = 4,
};

// Enum OnlineSubsystemUtils.EBeaconConnectionState
// NumValues: 0x0005
enum class EBeaconConnectionState : uint8
{
	Invalid                                  = 0,
	Closed                                   = 1,
	Pending                                  = 2,
	Open                                     = 3,
	EBeaconConnectionState_MAX               = 4,
};

// Enum OnlineSubsystemUtils.EClientRequestType
// NumValues: 0x0009
enum class EClientRequestType : uint8
{
	NonePending                              = 0,
	ExistingSessionReservation               = 1,
	ReservationUpdate                        = 2,
	EmptyServerReservation                   = 3,
	Reconnect                                = 4,
	Abandon                                  = 5,
	ReservationRemoveMembers                 = 6,
	AddOrUpdateReservation                   = 7,
	EClientRequestType_MAX                   = 8,
};

// Enum OnlineSubsystemUtils.EPartyReservationResult
// NumValues: 0x0011
enum class EPartyReservationResult : uint8
{
	NoResult                                 = 0,
	RequestPending                           = 1,
	GeneralError                             = 2,
	PartyLimitReached                        = 3,
	IncorrectPlayerCount                     = 4,
	RequestTimedOut                          = 5,
	ReservationDuplicate                     = 6,
	ReservationNotFound                      = 7,
	ReservationAccepted                      = 8,
	ReservationDenied                        = 9,
	ReservationDenied_CrossPlayRestriction   = 10,
	ReservationDenied_Banned                 = 11,
	ReservationRequestCanceled               = 12,
	ReservationInvalid                       = 13,
	BadSessionId                             = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult_MAX              = 16,
};

// Enum OnlineSubsystemUtils.ESpectatorClientRequestType
// NumValues: 0x0007
enum class ESpectatorClientRequestType : uint8
{
	NonePending                              = 0,
	ExistingSessionReservation               = 1,
	ReservationUpdate                        = 2,
	EmptyServerReservation                   = 3,
	Reconnect                                = 4,
	Abandon                                  = 5,
	ESpectatorClientRequestType_MAX          = 6,
};

// Enum OnlineSubsystemUtils.ESpectatorReservationResult
// NumValues: 0x0011
enum class ESpectatorReservationResult : uint8
{
	NoResult                                 = 0,
	RequestPending                           = 1,
	GeneralError                             = 2,
	SpectatorLimitReached                    = 3,
	IncorrectPlayerCount                     = 4,
	RequestTimedOut                          = 5,
	ReservationDuplicate                     = 6,
	ReservationNotFound                      = 7,
	ReservationAccepted                      = 8,
	ReservationDenied                        = 9,
	ReservationDenied_CrossPlayRestriction   = 10,
	ReservationDenied_Banned                 = 11,
	ReservationRequestCanceled               = 12,
	ReservationInvalid                       = 13,
	BadSessionId                             = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult_MAX          = 16,
};

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x0108 (0x0108 - 0x0000)
struct alignas(0x08) FBlueprintSessionResult final
{
public:
	uint8                                         Pad_0[0x108];                                      // 0x0000(0x0108)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBlueprintSessionResult) == 0x000008, "Wrong alignment on FBlueprintSessionResult");
static_assert(sizeof(FBlueprintSessionResult) == 0x000108, "Wrong size on FBlueprintSessionResult");

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
// 0x0030 (0x0030 - 0x0000)
struct FInAppPurchaseReceiptInfo2 final
{
public:
	class FString                                 ItemName;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ItemId;                                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ValidationInfo;                                    // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInAppPurchaseReceiptInfo2) == 0x000008, "Wrong alignment on FInAppPurchaseReceiptInfo2");
static_assert(sizeof(FInAppPurchaseReceiptInfo2) == 0x000030, "Wrong size on FInAppPurchaseReceiptInfo2");
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ItemName) == 0x000000, "Member 'FInAppPurchaseReceiptInfo2::ItemName' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ItemId) == 0x000010, "Member 'FInAppPurchaseReceiptInfo2::ItemId' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ValidationInfo) == 0x000020, "Member 'FInAppPurchaseReceiptInfo2::ValidationInfo' has a wrong offset!");

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo
// 0x0030 (0x0030 - 0x0000)
struct FInAppPurchaseReceiptInfo final
{
public:
	class FString                                 ItemName;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ItemId;                                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ValidationInfo;                                    // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInAppPurchaseReceiptInfo) == 0x000008, "Wrong alignment on FInAppPurchaseReceiptInfo");
static_assert(sizeof(FInAppPurchaseReceiptInfo) == 0x000030, "Wrong size on FInAppPurchaseReceiptInfo");
static_assert(offsetof(FInAppPurchaseReceiptInfo, ItemName) == 0x000000, "Member 'FInAppPurchaseReceiptInfo::ItemName' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseReceiptInfo, ItemId) == 0x000010, "Member 'FInAppPurchaseReceiptInfo::ItemId' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseReceiptInfo, ValidationInfo) == 0x000020, "Member 'FInAppPurchaseReceiptInfo::ValidationInfo' has a wrong offset!");

// ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
// 0x0110 (0x0110 - 0x0000)
struct FOnlineProxyStoreOffer final
{
public:
	class FString                                 OfferId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Title;                                             // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   Description;                                       // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   LongDescription;                                   // 0x0040(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   RegularPriceText;                                  // 0x0058(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                         RegularPrice;                                      // 0x0070(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   PriceText;                                         // 0x0078(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                         NumericPrice;                                      // 0x0090(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrencyCode;                                      // 0x0098(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              ReleaseDate;                                       // 0x00A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              ExpirationDate;                                    // 0x00B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOnlineProxyStoreOfferDiscountType            DiscountType;                                      // 0x00B8(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class FString>            DynamicFields;                                     // 0x00C0(0x0050)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};
static_assert(alignof(FOnlineProxyStoreOffer) == 0x000008, "Wrong alignment on FOnlineProxyStoreOffer");
static_assert(sizeof(FOnlineProxyStoreOffer) == 0x000110, "Wrong size on FOnlineProxyStoreOffer");
static_assert(offsetof(FOnlineProxyStoreOffer, OfferId) == 0x000000, "Member 'FOnlineProxyStoreOffer::OfferId' has a wrong offset!");
static_assert(offsetof(FOnlineProxyStoreOffer, Title) == 0x000010, "Member 'FOnlineProxyStoreOffer::Title' has a wrong offset!");
static_assert(offsetof(FOnlineProxyStoreOffer, Description) == 0x000028, "Member 'FOnlineProxyStoreOffer::Description' has a wrong offset!");
static_assert(offsetof(FOnlineProxyStoreOffer, LongDescription) == 0x000040, "Member 'FOnlineProxyStoreOffer::LongDescription' has a wrong offset!");
static_assert(offsetof(FOnlineProxyStoreOffer, RegularPriceText) == 0x000058, "Member 'FOnlineProxyStoreOffer::RegularPriceText' has a wrong offset!");
static_assert(offsetof(FOnlineProxyStoreOffer, RegularPrice) == 0x000070, "Member 'FOnlineProxyStoreOffer::RegularPrice' has a wrong offset!");
static_assert(offsetof(FOnlineProxyStoreOffer, PriceText) == 0x000078, "Member 'FOnlineProxyStoreOffer::PriceText' has a wrong offset!");
static_assert(offsetof(FOnlineProxyStoreOffer, NumericPrice) == 0x000090, "Member 'FOnlineProxyStoreOffer::NumericPrice' has a wrong offset!");
static_assert(offsetof(FOnlineProxyStoreOffer, CurrencyCode) == 0x000098, "Member 'FOnlineProxyStoreOffer::CurrencyCode' has a wrong offset!");
static_assert(offsetof(FOnlineProxyStoreOffer, ReleaseDate) == 0x0000A8, "Member 'FOnlineProxyStoreOffer::ReleaseDate' has a wrong offset!");
static_assert(offsetof(FOnlineProxyStoreOffer, ExpirationDate) == 0x0000B0, "Member 'FOnlineProxyStoreOffer::ExpirationDate' has a wrong offset!");
static_assert(offsetof(FOnlineProxyStoreOffer, DiscountType) == 0x0000B8, "Member 'FOnlineProxyStoreOffer::DiscountType' has a wrong offset!");
static_assert(offsetof(FOnlineProxyStoreOffer, DynamicFields) == 0x0000C0, "Member 'FOnlineProxyStoreOffer::DynamicFields' has a wrong offset!");

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
// 0x0030 (0x0030 - 0x0000)
struct FInAppPurchaseRestoreInfo2 final
{
public:
	class FString                                 ItemName;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ItemId;                                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ValidationInfo;                                    // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInAppPurchaseRestoreInfo2) == 0x000008, "Wrong alignment on FInAppPurchaseRestoreInfo2");
static_assert(sizeof(FInAppPurchaseRestoreInfo2) == 0x000030, "Wrong size on FInAppPurchaseRestoreInfo2");
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ItemName) == 0x000000, "Member 'FInAppPurchaseRestoreInfo2::ItemName' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ItemId) == 0x000010, "Member 'FInAppPurchaseRestoreInfo2::ItemId' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ValidationInfo) == 0x000020, "Member 'FInAppPurchaseRestoreInfo2::ValidationInfo' has a wrong offset!");

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0050 (0x0050 - 0x0000)
struct FPlayerReservation final
{
public:
	struct FUniqueNetIdRepl                       UniqueId;                                          // 0x0000(0x0028)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ValidationStr;                                     // 0x0028(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Platform;                                          // 0x0038(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowCrossplay;                                   // 0x0048(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ElapsedTime;                                       // 0x004C(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPlayerReservation) == 0x000008, "Wrong alignment on FPlayerReservation");
static_assert(sizeof(FPlayerReservation) == 0x000050, "Wrong size on FPlayerReservation");
static_assert(offsetof(FPlayerReservation, UniqueId) == 0x000000, "Member 'FPlayerReservation::UniqueId' has a wrong offset!");
static_assert(offsetof(FPlayerReservation, ValidationStr) == 0x000028, "Member 'FPlayerReservation::ValidationStr' has a wrong offset!");
static_assert(offsetof(FPlayerReservation, Platform) == 0x000038, "Member 'FPlayerReservation::Platform' has a wrong offset!");
static_assert(offsetof(FPlayerReservation, bAllowCrossplay) == 0x000048, "Member 'FPlayerReservation::bAllowCrossplay' has a wrong offset!");
static_assert(offsetof(FPlayerReservation, ElapsedTime) == 0x00004C, "Member 'FPlayerReservation::ElapsedTime' has a wrong offset!");

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
// 0x00F8 (0x00F8 - 0x0000)
struct FInAppPurchaseProductInfo2 final
{
public:
	class FString                                 Identifier;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TransactionIdentifier;                             // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DisplayName;                                       // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DisplayDescription;                                // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DisplayPrice;                                      // 0x0040(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RawPrice;                                          // 0x0050(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrencyCode;                                      // 0x0058(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CurrencySymbol;                                    // 0x0068(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DecimalSeparator;                                  // 0x0078(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 GroupingSeparator;                                 // 0x0088(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReceiptData;                                       // 0x0098(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>            DynamicFields;                                     // 0x00A8(0x0050)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInAppPurchaseProductInfo2) == 0x000008, "Wrong alignment on FInAppPurchaseProductInfo2");
static_assert(sizeof(FInAppPurchaseProductInfo2) == 0x0000F8, "Wrong size on FInAppPurchaseProductInfo2");
static_assert(offsetof(FInAppPurchaseProductInfo2, Identifier) == 0x000000, "Member 'FInAppPurchaseProductInfo2::Identifier' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo2, TransactionIdentifier) == 0x000010, "Member 'FInAppPurchaseProductInfo2::TransactionIdentifier' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayName) == 0x000020, "Member 'FInAppPurchaseProductInfo2::DisplayName' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayDescription) == 0x000030, "Member 'FInAppPurchaseProductInfo2::DisplayDescription' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayPrice) == 0x000040, "Member 'FInAppPurchaseProductInfo2::DisplayPrice' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo2, RawPrice) == 0x000050, "Member 'FInAppPurchaseProductInfo2::RawPrice' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo2, CurrencyCode) == 0x000058, "Member 'FInAppPurchaseProductInfo2::CurrencyCode' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo2, CurrencySymbol) == 0x000068, "Member 'FInAppPurchaseProductInfo2::CurrencySymbol' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo2, DecimalSeparator) == 0x000078, "Member 'FInAppPurchaseProductInfo2::DecimalSeparator' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo2, GroupingSeparator) == 0x000088, "Member 'FInAppPurchaseProductInfo2::GroupingSeparator' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo2, ReceiptData) == 0x000098, "Member 'FInAppPurchaseProductInfo2::ReceiptData' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo2, DynamicFields) == 0x0000A8, "Member 'FInAppPurchaseProductInfo2::DynamicFields' has a wrong offset!");

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
// 0x0018 (0x0018 - 0x0000)
struct FInAppPurchaseProductRequest2 final
{
public:
	class FString                                 ProductIdentifier;                                 // 0x0000(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsConsumable;                                     // 0x0010(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInAppPurchaseProductRequest2) == 0x000008, "Wrong alignment on FInAppPurchaseProductRequest2");
static_assert(sizeof(FInAppPurchaseProductRequest2) == 0x000018, "Wrong size on FInAppPurchaseProductRequest2");
static_assert(offsetof(FInAppPurchaseProductRequest2, ProductIdentifier) == 0x000000, "Member 'FInAppPurchaseProductRequest2::ProductIdentifier' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductRequest2, bIsConsumable) == 0x000010, "Member 'FInAppPurchaseProductRequest2::bIsConsumable' has a wrong offset!");

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// 0x0040 (0x0040 - 0x0000)
struct FPIELoginSettingsInternal final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Token;                                             // 0x0010(0x0010)(Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Type;                                              // 0x0020(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 TokenBytes;                                        // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPIELoginSettingsInternal) == 0x000008, "Wrong alignment on FPIELoginSettingsInternal");
static_assert(sizeof(FPIELoginSettingsInternal) == 0x000040, "Wrong size on FPIELoginSettingsInternal");
static_assert(offsetof(FPIELoginSettingsInternal, ID) == 0x000000, "Member 'FPIELoginSettingsInternal::ID' has a wrong offset!");
static_assert(offsetof(FPIELoginSettingsInternal, Token) == 0x000010, "Member 'FPIELoginSettingsInternal::Token' has a wrong offset!");
static_assert(offsetof(FPIELoginSettingsInternal, Type) == 0x000020, "Member 'FPIELoginSettingsInternal::Type' has a wrong offset!");
static_assert(offsetof(FPIELoginSettingsInternal, TokenBytes) == 0x000030, "Member 'FPIELoginSettingsInternal::TokenBytes' has a wrong offset!");

// ScriptStruct OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
// 0x0020 (0x0020 - 0x0000)
struct FPartyBeaconCrossplayPlatformMapping final
{
public:
	class FString                                 PlatformName;                                      // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PlatformType;                                      // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPartyBeaconCrossplayPlatformMapping) == 0x000008, "Wrong alignment on FPartyBeaconCrossplayPlatformMapping");
static_assert(sizeof(FPartyBeaconCrossplayPlatformMapping) == 0x000020, "Wrong size on FPartyBeaconCrossplayPlatformMapping");
static_assert(offsetof(FPartyBeaconCrossplayPlatformMapping, PlatformName) == 0x000000, "Member 'FPartyBeaconCrossplayPlatformMapping::PlatformName' has a wrong offset!");
static_assert(offsetof(FPartyBeaconCrossplayPlatformMapping, PlatformType) == 0x000010, "Member 'FPartyBeaconCrossplayPlatformMapping::PlatformType' has a wrong offset!");

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0050 (0x0050 - 0x0000)
struct FPartyReservation final
{
public:
	int32                                         TeamNum;                                           // 0x0000(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       PartyLeader;                                       // 0x0008(0x0028)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerReservation>             PartyMembers;                                      // 0x0030(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FPlayerReservation>             RemovedPartyMembers;                               // 0x0040(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPartyReservation) == 0x000008, "Wrong alignment on FPartyReservation");
static_assert(sizeof(FPartyReservation) == 0x000050, "Wrong size on FPartyReservation");
static_assert(offsetof(FPartyReservation, TeamNum) == 0x000000, "Member 'FPartyReservation::TeamNum' has a wrong offset!");
static_assert(offsetof(FPartyReservation, PartyLeader) == 0x000008, "Member 'FPartyReservation::PartyLeader' has a wrong offset!");
static_assert(offsetof(FPartyReservation, PartyMembers) == 0x000030, "Member 'FPartyReservation::PartyMembers' has a wrong offset!");
static_assert(offsetof(FPartyReservation, RemovedPartyMembers) == 0x000040, "Member 'FPartyReservation::RemovedPartyMembers' has a wrong offset!");

// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
// 0x0078 (0x0078 - 0x0000)
struct FSpectatorReservation final
{
public:
	struct FUniqueNetIdRepl                       SpectatorId;                                       // 0x0000(0x0028)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerReservation                     Spectator;                                         // 0x0028(0x0050)(Transient, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSpectatorReservation) == 0x000008, "Wrong alignment on FSpectatorReservation");
static_assert(sizeof(FSpectatorReservation) == 0x000078, "Wrong size on FSpectatorReservation");
static_assert(offsetof(FSpectatorReservation, SpectatorId) == 0x000000, "Member 'FSpectatorReservation::SpectatorId' has a wrong offset!");
static_assert(offsetof(FSpectatorReservation, Spectator) == 0x000028, "Member 'FSpectatorReservation::Spectator' has a wrong offset!");

}

