#pragma once
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string>
#include <cstdlib>
#include "Weapon.h"

using namespace std;

void printNewWeapon(Weapon *W, int index)
{
    cout << "|--------------------------|" << endl;
    cout << "|         Weapon " << index + 1 << "         |" << endl;
    cout << "|        Weapon Name       |" << endl;
    cout << "|       " << W->getName() << "         |" << endl;
    cout << "|       Weapon Attack      |" << endl;
    cout << "|            " << W->getAttack() << "             |" << endl;
    cout << "|       Weapon Defense     |" << endl;
    cout << "|            " << W->getDefense() << "             |" << endl;
    cout << "|--------------------------|" << endl;
}