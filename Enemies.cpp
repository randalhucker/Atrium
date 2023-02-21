#pragma once
#include "Enemies.h"
#include <cstdlib>
#include <cmath>
#include <string>
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

// Default constructor
Enemies::Enemies()
{
    Attack = 0;
    Defense = 0;
    Magic = 0;
    Level = 0;
    Health = 20;
    Name = "";
}

// Destructor
Enemies::~Enemies()
{
}

// Returns an INT of the Enemies's attack
int Enemies::getAttack()
{
    return (Attack);
}

// Returns an INT of the Enemies's defense
int Enemies::getDefense()
{
    return (Defense);
}

// Returns an INT of the Enemies's magic
int Enemies::getMagic()
{
    return (Magic);
}

// Returns an INT of the Enemies's magic
string Enemies::getName()
{
    return (Name);
}

// Returns an INT of the Enemies's level
int Enemies::getLevel()
{
    return (Level);
}

// Returns an INT of the Enemies's health
int Enemies::getHealth()
{
    return (Health);
}

// Uses an INT for the Enemies's new attack
void Enemies::setAttack(int A)
{
    Attack = A;
}

// Uses an INT for the Enemies's new health
void Enemies::setHealth(int H)
{
    Health = H;
}

// Uses an INT for the Enemies's new level
void Enemies::setLevel(int L)
{
    Level = L;
}

// Uses an INT for the Enemies's new defense
void Enemies::setDefense(int D)
{
    Defense = D;
}

// Uses an INT for the Enemies's new magic
void Enemies::setMagic(int M)
{
    Magic = M;
}

void printNewEnemy(Enemies *E)
{
    cout << "|--------------------------|" << endl;
    cout << "|        Enemy Name       |" << endl;
    cout << "|           Snake          |" << endl;
    cout << "|       Enemy Attack      |" << endl;
    cout << "|            " << E->getAttack() << "             |" << endl;
    cout << "|       Enemy Defense     |" << endl;
    cout << "|            " << E->getDefense() << "             |" << endl;
    cout << "|       Enemy Health     |" << endl;
    cout << "|            " << E->getHealth() << "             |" << endl;
    cout << "|--------------------------|" << endl;
}