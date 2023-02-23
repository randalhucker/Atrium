#pragma once
#include "Goblin.h"
#include <cstdlib>
#include <cmath>
#include <string>
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

// Default constructor
Goblin::Goblin()
{
    Attack = 3;
    Defense = 5;
    Name = "Goblin";
    Level = 1;
}

// Fill constructor
Goblin::Goblin(int A, int D, int L, int H)
{
    Attack = A;
    Defense = D;
    Name = "Goblin";
    Level = L;
    Health = H;
    Magic = 0;
}

// Destructor
Goblin::~Goblin()
{
}