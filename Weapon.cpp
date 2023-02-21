#pragma once
#include "Weapon.h"
#include <cstdlib>
#include <cmath>
#include <string>
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

// Default constructor
Weapon::Weapon()
{
    Attack = 0;
    Defense = 0;
}

// Fill constructor
Weapon::Weapon(string N, int A, int D)
{
    Attack = A;
    Defense = D;
    Name = N;
}

// Destructor
Weapon::~Weapon()
{
}

// Getters
int Weapon::getAttack()
{
    return (Attack);
}

int Weapon::getDefense()
{
    return (Defense);
}

string Weapon::getName()
{
    return (Name);
}

// Setters
void Weapon::setAttack(int A)
{
    Attack = A;
}

void Weapon::setDefense(int D)
{
    Defense = D;
}

void Weapon::Upgrade(int A, int D)
{
    srand(time(NULL));
    setAttack(A);
    setDefense(D);
}