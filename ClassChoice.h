#pragma once
#include <string>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class ClassChoice
{
protected:
    int Attack;
    int Defense;
    int Magic;

public:
    ClassChoice();  // Default Constructor
    ~ClassChoice(); // Destructor

    // Getters
    int getAttack();
    int getDefense();
    int getMagic();

    // Setters
    void setAttack(int A);
    void setDefense(int D);
    void setMagic(int M);
};