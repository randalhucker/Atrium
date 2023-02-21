#pragma once
#include "ClassChoice.h"
#include <cstdlib>
#include <cmath>
#include <string>
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

// Default constructor
ClassChoice::ClassChoice()
{
    Attack = 0;
    Defense = 0;
    Magic = 0;
}

// Destructor
ClassChoice::~ClassChoice()
{
}

// Returns an INT of the ClassChoice's attack
int ClassChoice::getAttack()
{
    return (Attack);
}

// Returns an INT of the ClassChoice's defense
int ClassChoice::getDefense()
{
    return (Defense);
}

// Returns an INT of the ClassChoice's magic
int ClassChoice::getMagic()
{
    return (Magic);
}

// Uses an INT for the ClassChoice's new health
void ClassChoice::setAttack(int A)
{
    Attack = A;
}

// Uses an INT for the ClassChoice's new defense
void ClassChoice::setDefense(int D)
{
    Defense = D;
}

// Uses an INT for the ClassChoice's new magic
void ClassChoice::setMagic(int M)
{
    Magic = M;
}
