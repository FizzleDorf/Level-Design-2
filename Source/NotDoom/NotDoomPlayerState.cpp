// Fill out your copyright notice in the Description page of Project Settings.


#include "NotDoomPlayerState.h"

ANotDoomPlayerState::ANotDoomPlayerState()
{
    for (int i = 0; i < 5; i++)
    {
        UnlockedWeaponsArray.Add(true);
    }

    for (int i = 0; i < 5; i++)
    {
        switch (i)
        {
        case(0): //SemiAuto
            WeaponAmmoArray.Add(15);
            break;
        case(1): //Shotgun
            WeaponAmmoArray.Add(25);
            break;
        case(2): //Rifle
            WeaponAmmoArray.Add(95);
            break;
        case(3): //Charge Gun
            WeaponAmmoArray.Add(50);
            break;
        case(4): //GatlingGun
            WeaponAmmoArray.Add(95);
            break;
        default:
            WeaponAmmoArray.Add(true);
            break;
        }     
    }

    for (int i = 0; i < 5; i++)
    {
        switch (i)
        {
        case(0): //SemiAuto
            WeaponMaxAmmoArray.Add(200);
            break;
        case(1): //Shotgun
            WeaponMaxAmmoArray.Add(60);
            break;
        case(2): //Rifle
            WeaponMaxAmmoArray.Add(150);
            break;
        case(3): //Charge Gun
            WeaponMaxAmmoArray.Add(50);
            break;
        case(4): //GatlingGun
            WeaponMaxAmmoArray.Add(150);
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

float ANotDoomPlayerState::GetMaxAmmo(int index)
{
    return WeaponMaxAmmoArray[index];
}

void ANotDoomPlayerState::SetMaxAmmo(int index, float newValue)
{
    WeaponMaxAmmoArray[index] = newValue;
}

void ANotDoomPlayerState::NextWeapon()
{
    if (CurrentWeapon >= 4)
    {
        CurrentWeapon = 0;
    }
    else
    {
        CurrentWeapon++;
    }
}

void ANotDoomPlayerState::PrevWeapon()
{
    if (CurrentWeapon <= 0)
    {
        CurrentWeapon = 4;
    }
    else
    {
        CurrentWeapon--;
    }
}
