#pragma once
#include <string>
#include <cstdlib>
#include <iostream>
#include <string>
#include "Enemies.h"

using namespace std;

class Goblin : public Enemies
{
protected:
public:
    Goblin();                           // Default Constructor
    Goblin(int A, int D, int L, int H); // Default Constructor
    ~Goblin();                          // Destructor
};