#pragma once
#include "Barbarian.h"
#include <cstdlib>
#include <cmath>
#include <string>
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

// Default constructor
Barbarian::Barbarian()
{
    Attack = 5;
    Defense = 5;
}

// Destructor
Barbarian::~Barbarian()
{
}