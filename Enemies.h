#pragma once
#include <string>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Enemies
{
protected:
    int Attack;
    int Defense;
    int Magic;
    int Level;
    int Health;
    string Name;

public:
    Enemies();  // Default Constructor
    ~Enemies(); // Destructor

    // Getters
    int getAttack();
    int getDefense();
    int getMagic();
    int getLevel();
    int getHealth();
    string getName();

    // Setters
    void setAttack(int A);
    void setDefense(int D);
    void setMagic(int M);
    void setHealth(int H);
    void setLevel(int L);
};