#pragma once
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string>
#include <cstdlib>
#include "Player.h"
#include "Enemies.h"
#include "Weapon.h"
#include "Snake.h"
#include "Player.h"

using namespace std;

void printNewEnemy(Enemies *E);
void printNewWeapon(Weapon *W, int Index);

void showFightMenu()
{
    cout << "Enter 1 to fight." << endl;
    cout << "Enter 2 to heal." << endl;
    // cout << "Enter 3 change weapons." << endl;
    cout << "> ";
}

void Fight(Player *User, Enemies *Enemy)
{
    while (Enemy->getHealth() > 0 && User->getHealth() > 0)
    {
        cout << "Your foe:" << endl;
        printNewEnemy(Enemy);
        cout << "You have " << User->getHealth() << " points of health remaining." << endl
             << endl;
        int WeaponChoice = 100;
        Weapon *SelectedWeapon;

        int FightDecision;
        showFightMenu();
        cin >> FightDecision;
        cout << endl;

        if (FightDecision == 1)
        {
            string Confirmation = "n";
            while (WeaponChoice > User->getWeaponAmt() && WeaponChoice > 0)
            {
                cout << "What weapon will you use against the " << Enemy->getName() << "?" << endl;
                for (int i = 0; i < User->getWeaponAmt(); i++)
                {
                    printNewWeapon(User->getWeapon(i), i);
                }
                cout << "> ";
                cin >> WeaponChoice;
                cout << endl;
                SelectedWeapon = User->getWeapon(WeaponChoice - 1);
                // cout << SelectedWeapon->getName() << " is the weapon you'd like to use? (y/n)" << endl;
                // cin >> Confirmation;
                // cout << endl;
            }
            cout << "We fight!" << endl
                 << endl;
            srand(time(NULL));
            int Speed = (rand() % 20 + 1);
            if (Speed > 10)
            {
                cout << "You attack first!" << endl;
                int Damage = ((User->getAttack() + User->getClass()->getAttack() + SelectedWeapon->getAttack()) - Enemy->getDefense());
                if (Damage >= 0)
                {
                    cout << "The " << Enemy->getName() << " took " << Damage << " points of damage!" << endl
                         << endl;
                    Enemy->setHealth(Enemy->getHealth() - Damage);
                }
                else
                {
                    cout << "The " << Enemy->getName() << " took no damage!" << endl;
                    cout << "Not good!" << endl
                         << endl;
                }
            }
            else
            {
                cout << "The " << Enemy->getName() << " attacks first!" << endl;
                int Damage = (Enemy->getAttack() - (User->getDefense() + User->getClass()->getDefense() + SelectedWeapon->getDefense()));
                if (Damage >= 0)
                {
                    cout << "You took " << Damage << "points of damage!" << endl
                         << endl;
                    User->setHealth(User->getHealth() - Damage);
                }
                else
                {
                    cout << "You took no damage!" << endl
                         << endl;
                }
            }
        }
    }
    cout << "You killed the " << Enemy->getName() << "!" << endl
         << endl;
    User->setUpgradePoints(User->getUpgradePoints() + ( Enemy->getLevel() / 2 ));
}