#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Auton

#include "Basic.hpp"


namespace SDK
{

// Enum Auton.ETLAutonKeyHandling
// NumValues: 0x0007
enum class ETLAutonKeyHandling : uint8
{
	DoNothing                                = 0,
	ReservedOnlyAndRelayIfNotHandled         = 1,
	ReservedOnlyAndDoNotRelay                = 2,
	AnyOtherAndRelayIfNotHandled             = 3,
	AnyOtherAndDoNotRelay                    = 4,
	KeyFilter                                = 5,
	ETLAutonKeyHandling_MAX                  = 6,
};

// Enum Auton.ETLAutonNosyNeighborsGossip
// NumValues: 0x0004
enum class ETLAutonNosyNeighborsGossip : uint8
{
	None                                     = 0,
	SomeoneFocused                           = 1,
	NoOneFocused                             = 2,
	ETLAutonNosyNeighborsGossip_MAX          = 3,
};

// Enum Auton.ETLAutonLoopNavigationHint
// NumValues: 0x0005
enum class ETLAutonLoopNavigationHint : uint8
{
	None                                     = 0,
	Horizon                                  = 1,
	Vertical                                 = 2,
	All                                      = 3,
	ETLAutonLoopNavigationHint_MAX           = 4,
};

// Enum Auton.ETLAutonScrollDestination
// NumValues: 0x0004
enum class ETLAutonScrollDestination : uint8
{
	IntoView                                 = 0,
	Center                                   = 1,
	JustStay                                 = 2,
	ETLAutonScrollDestination_MAX            = 3,
};

// Enum Auton.ETLAutonOrderTagHint
// NumValues: 0x0007
enum class ETLAutonOrderTagHint : uint8
{
	EqualTo                                  = 0,
	LessThan                                 = 1,
	LessThanOrEqualTo                        = 2,
	GreaterThan                              = 3,
	GreaterThanOrEqualTo                     = 4,
	NotEqualTo                               = 5,
	ETLAutonOrderTagHint_MAX                 = 6,
};

// Enum Auton.ETLAutonEnterReaction
// NumValues: 0x0014
enum class ETLAutonEnterReaction : uint8
{
	Enter                                    = 0,
	Leave                                    = 1,
	East                                     = 2,
	West                                     = 3,
	South                                    = 4,
	North                                    = 5,
	FarEast                                  = 6,
	FarWest                                  = 7,
	FarSouth                                 = 8,
	FarNorth                                 = 9,
	Next                                     = 10,
	Prev                                     = 11,
	FarNext                                  = 12,
	FarPrev                                  = 13,
	Jump                                     = 14,
	Action                                   = 15,
	DoNotEnter                               = 16,
	RelayEnter                               = 17,
	PreviousVisited                          = 18,
	ETLAutonEnterReaction_MAX                = 19,
};

// Enum Auton.ETLAutonChildNavigationHint
// NumValues: 0x0007
enum class ETLAutonChildNavigationHint : uint8
{
	None                                     = 0,
	Horizon                                  = 1,
	Vertical                                 = 2,
	FlatternHorizon                          = 3,
	FlatternVertical                         = 4,
	FlatternCardinal                         = 5,
	ETLAutonChildNavigationHint_MAX          = 6,
};

// Enum Auton.ETLAutonNavigation
// NumValues: 0x0016
enum class ETLAutonNavigation : uint8
{
	None                                     = 0,
	Enter                                    = 1,
	Leave                                    = 2,
	Next                                     = 3,
	Prev                                     = 4,
	East                                     = 5,
	West                                     = 6,
	South                                    = 7,
	North                                    = 8,
	FarEast                                  = 9,
	FarWest                                  = 10,
	FarSouth                                 = 11,
	FarNorth                                 = 12,
	FarNext                                  = 13,
	FarPrev                                  = 14,
	FreeEast                                 = 15,
	FreeWest                                 = 16,
	FreeSouth                                = 17,
	FreeNorth                                = 18,
	ForceEnter                               = 19,
	PreviousVisited                          = 20,
	ETLAutonNavigation_MAX                   = 21,
};

// Enum Auton.ETLAutonAreaType
// NumValues: 0x0004
enum class ETLAutonAreaType : uint8
{
	None                                     = 0,
	UsableArea                               = 1,
	UnusableArea                             = 2,
	ETLAutonAreaType_MAX                     = 3,
};

// Enum Auton.ETLAutonType
// NumValues: 0x0007
enum class ETLAutonType : uint8
{
	None                                     = 0,
	Node                                     = 1,
	Group                                    = 2,
	Tree                                     = 3,
	Window                                   = 4,
	Unusable                                 = 5,
	ETLAutonType_MAX                         = 6,
};

}

