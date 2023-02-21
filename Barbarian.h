#pragma once
#include <string>
#include <cstdlib>
#include <iostream>
#include <string>
#include "ClassChoice.h"

using namespace std;

class Barbarian : public ClassChoice
{
protected:
public:
    Barbarian();  // Default Constructor
    ~Barbarian(); // Destructor
};