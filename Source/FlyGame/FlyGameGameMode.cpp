// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FlyGame.h"
#include "FlyGameGameMode.h"
#include "FlyGamePawn.h"

AFlyGameGameMode::AFlyGameGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AFlyGamePawn::StaticClass();
}
