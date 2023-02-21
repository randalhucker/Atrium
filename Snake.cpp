#pragma once
#include "Snake.h"
#include <cstdlib>
#include <cmath>
#include <string>
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

// Default constructor
Snake::Snake()
{
    Attack = 3;
    Defense = 5;
    Name = "Snake";
    Level = 1;
}

// Fill constructor
Snake::Snake(int A, int D, int L, int H)
{
    Attack = A;
    Defense = D;
    Name = "Snake";
    Level = L;
    Health = H;
    Magic = 0;
}

// Destructor
Snake::~Snake()
{
}