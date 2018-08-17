// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UDPLeapInterfaceGameMode.h"
#include "UDPLeapInterfaceCharacter.h"

AUDPLeapInterfaceGameMode::AUDPLeapInterfaceGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AUDPLeapInterfaceCharacter::StaticClass();	
}
