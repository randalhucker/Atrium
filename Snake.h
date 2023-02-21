#pragma once
#include <string>
#include <cstdlib>
#include <iostream>
#include <string>
#include "Enemies.h"

using namespace std;

class Snake : public Enemies
{
protected:
public:
    Snake();                           // Default Constructor
    Snake(int A, int D, int L, int H); // Default Constructor
    ~Snake();                          // Destructor
};