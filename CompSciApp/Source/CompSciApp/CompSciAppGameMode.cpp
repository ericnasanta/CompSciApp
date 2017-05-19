// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "CompSciApp.h"
#include "CompSciAppGameMode.h"
#include "CompSciAppCharacter.h"

ACompSciAppGameMode::ACompSciAppGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = ACompSciAppCharacter::StaticClass();	
}
