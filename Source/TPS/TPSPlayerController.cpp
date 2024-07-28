// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPSPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "TPSCharacter.h"
#include "Engine/World.h"

ATPSPlayerController::ATPSPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

