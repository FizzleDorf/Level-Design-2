// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "NotDoomPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class NOTDOOM_API ANotDoomPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
    UPROPERTY(EditAnywhere)
        TArray<bool> UnlockedWeaponsArray;

    UPROPERTY(EditAnywhere)
        TArray<float> WeaponAmmoArray;

    UPROPERTY(EditAnywhere)
        int CurrentWeapon;

    UPROPERTY(EditAnywhere)
        FVector SavedPosition;

    ANotDoomPlayerState();

    UFUNCTION(BlueprintCallable)
        int GetCurrentWeapon();
    
    UFUNCTION(BlueprintCallable)
        void SetCurrentWeapon(int newValue);

    UFUNCTION(BlueprintCallable)
        bool GetUnlockedWeapon(int index);

    UFUNCTION(BlueprintCallable)
        void SetUnlockedWeapon(int index);
    
    UFUNCTION(BlueprintCallable)
        float GetCurrentAmmo(int index);
    
    UFUNCTION(BlueprintCallable)
        void SetCurrentAmmo(int index, float newValue);
};
