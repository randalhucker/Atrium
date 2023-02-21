#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string>
#include <cmath>
#include <cstdlib>
#include "Player.h"
#include "Weapon.h"

using namespace std;

void printNewWeapon(Weapon *W, int index);

Weapon *FirstWeapon(int searchChoice)
{
    if (searchChoice == 1)
    {
        string Sharpen;
        cout << "You found a stick! Want to try to whittle it? (y/n)" << endl;
        cout << "> ";
        cin >> Sharpen;
        if (Sharpen == "y")
        {
            srand(time(NULL));
            int Execution = (rand() % 20 + 6);
            if (Execution > 10)
            {
                cout << "Success! You sharpened the stick!" << endl;
                return (new Weapon("Pointy Stick", 2, 1));
            }
            else
            {
                cout << "Whoops! You dulled the stick!" << endl;
                return (new Weapon("Dull Stick", 0, 1));
            }
        }
        else
        {
            return (new Weapon("Pokey Stick", 1, 1));
        }
    }
    else
    {
        string Sharpen;
        cout << "You found a rock! Want to try to break it? (y/n)" << endl;
        cout << "> ";
        cin >> Sharpen;
        cout << endl;
        if (Sharpen == "y")
        {
            srand(time(NULL));
            int Execution = (rand() % 20 + 6);
            if (Execution > 12)
            {
                cout << "Success! You broke the stone!" << endl;
                return (new Weapon("Sharp Stone", 2, 2));
            }
            else
            {
                cout << "Whoops! You shattered the stone!" << endl;
                return (new Weapon("Broken Stone", 0, 1));
            }
        }
        else
        {
            return (new Weapon("Blunt Stone", 1, 1));
        }
    }
}

Player *GetFirstWeapon(Player *User)
{
    int SearchChoice;
    cout << "We need to find you a weapon, adventurer..." << endl;
    cout << "Search in the forest(1) or quarry(2)?" << endl;
    cout << "> ";
    cin >> SearchChoice;
    cout << endl;
    Weapon *Temp = FirstWeapon(SearchChoice);
    printNewWeapon(Temp, 0);
    User->setWeapon(Temp, 0);
    User->setWeaponAmt(1);
    return (User);
}