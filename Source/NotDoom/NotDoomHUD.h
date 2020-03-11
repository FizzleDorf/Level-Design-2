// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "NotDoomHUD.generated.h"

UCLASS()
class ANotDoomHUD : public AHUD
{
	GENERATED_BODY()

public:
	ANotDoomHUD();

    UPROPERTY(EditAnywhere, Category = Camera)
    class UTexture2D* CrosshairTex;

	/** Primary draw call for the HUD */
    UFUNCTION()
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */

};

