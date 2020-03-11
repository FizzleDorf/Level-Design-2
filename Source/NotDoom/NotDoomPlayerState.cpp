// Fill out your copyright notice in the Description page of Project Settings.


#include "NotDoomPlayerState.h"

ANotDoomPlayerState::ANotDoomPlayerState()
{
    for (int i = 0; i < 4; i++)
    {
        UnlockedWeaponsArray.Add(true);
    }

    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case(0): //SemiAuto
            WeaponAmmoArray.Add(150);
            break;
        case(1): //Shotgun
            WeaponAmmoArray.Add(50);
            break;
        case(2): //Rifle
            WeaponAmmoArray.Add(150);
            break;
        case(3): //Charge Gun
            WeaponAmmoArray.Add(100);
            break;
        case(4): //GatlingGun
            WeaponAmmoArray.Add(150);
            break;
        default:
            WeaponAmmoArray.Add(true);
            break;
        }     
    }
}

int ANotDoomPlayerState::GetCurrentWeapon()
{
    return CurrentWeapon;
}

void ANotDoomPlayerState::SetCurrentWeapon(int newValue)
{
    if (UnlockedWeaponsArray[newValue] == true)
    {
        CurrentWeapon = newValue;
    }
}

bool ANotDoomPlayerState::GetUnlockedWeapon(int index)
{
    return UnlockedWeaponsArray[index];
}

void ANotDoomPlayerState::SetUnlockedWeapon(int index)
{
    UnlockedWeaponsArray[index] = true;
}

float ANotDoomPlayerState::GetCurrentAmmo(int index)
{
    return WeaponAmmoArray[index];
}

void ANotDoomPlayerState::SetCurrentAmmo(int index, float newValue)
{
    WeaponAmmoArray[index] = newValue;
}
