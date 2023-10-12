#pragma once
#include "Player.h"
#include <cstdlib>
#include <cmath>
#include <string>
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

// Default constructor
Player::Player()
{
    Attack = 0;
    Defense = 0;
    WeaponAmt = 0;
    HealingAmt = 0;
    Level = 1;
    Health = 100;
    UpgradePoints = 0;
}

// Fill constructor
Player::Player(string S, int A, int D, ClassChoice *C)
{
    Attack = A;
    Defense = D;
    Class = C;
    Name = S;
    WeaponAmt = 0;
    Level = 1;
    Health = 100;
    UpgradePoints = 0;
}

// Destructor
Player::~Player()
{
}

// Returns an INT of the player's health
int Player::getHealth()
{
    return (Health);
}

// Returns a pointer to the class of the player.
ClassChoice *Player::getClass()
{
    return (Class);
}

// Returns an INT of the player's attack
int Player::getAttack()
{
    return (Attack);
}

// Returns an INT of the player's defense
int Player::getDefense()
{
    return (Defense);
}

// Returns an STRING of the player's name
string Player::getName()
{
    return (Name);
}

// Returns the weapon in slot 'Index'
Weapon *Player::getWeapon(int Index)
{
    return (Weapons[Index]);
}

// Returns an INT of the player's Level
int Player::getLevel()
{
    return (Level);
}

// Returns an INT of the player's Weapon Amt
int Player::getWeaponAmt()
{
    return (WeaponAmt);
}

// Returns an INT of the player's Upgrade Points
int Player::getUpgradePoints()
{
    return (UpgradePoints);
}

// Sets the weapon slot 'Index' to 'Weapon'
void Player::setWeapon(Weapon *W, int Index)
{
    Weapons[Index] = W;
}

// Uses an INT for the player's new health
void Player::setHealth(int H)
{
    Health = H;
}

// Uses an INT for the player's new health
void Player::setAttack(int A)
{
    Attack = A;
}

// Uses an INT for the player's new defense
void Player::setDefense(int D)
{
    Defense = D;
}

// Uses an INT for the player's new level
void Player::setLevel(int L)
{
    Level = L;
}

// Uses an INT for the player's new weaponamt
void Player::setWeaponAmt(int A)
{
    WeaponAmt = A;
}

// Uses a STR for the player's new name
void Player::setName(string S)
{
    Name = S;
}

// Uses an INT for the player's new upgrade points
void Player::setUpgradePoints(int P)
{
    UpgradePoints = P;
}