#pragma once
#include <string>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Weapon
{
protected:
    string Name;
    int Attack;
    int Defense;

public:
    Weapon();                                     // Default Constructor
    Weapon(string Name, int Attack, int Defense); // Fill constructor
    ~Weapon();                                    // Destructor

    // Getters
    int getAttack();
    int getDefense();
    string getName();

    // Setters
    void setAttack(int A);
    void setDefense(int D);

    // Other Functions
    virtual void Upgrade(int Attack, int Defense);
};