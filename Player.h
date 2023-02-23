#pragma once
#include <string>
#include <cstdlib>
#include <iostream>
#include <string>
#include "Weapon.h"
#include "ClassChoice.h"

using namespace std;

const int NUM_WEAPONS = 3;

class Player
{
protected:
    string Name;
    int Health;
    int Attack;
    int Defense;
    int Level;
    int WeaponAmt;
    int HealingAmt;
    Weapon *Weapons[NUM_WEAPONS];
    ClassChoice *Class;

public:
    Player();                                                     // Default Constructor
    Player(string Name, int Attack, int Defense, ClassChoice *C); // Fill constructor
    ~Player();                                                    // Destructor

    // Getters
    int getHealth();
    int getAttack();
    int getDefense();
    int getLevel();
    int getWeaponAmt();
    Weapon *getWeapon(int Index);
    string getName();
    ClassChoice *getClass();

    // Setters
    void setHealth(int H);
    void setAttack(int A);
    void setDefense(int D);
    void setName(string S);
    void setWeapon(Weapon *W, int Index);
    void setLevel(int L);
    void setWeaponAmt(int A);
};