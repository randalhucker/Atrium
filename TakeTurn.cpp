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
#include "Goblin.h"

using namespace std;

void printNewWeapon(Weapon *W, int Index);
void Fight(Player *User, Enemies *Enemy);
void UpgradePlayer(Player *Player);
void UpgradeWeapon(Player *Player);

void TakeTurn(Player *Player)
{
    Enemies *CurrentEnemy;
    srand(time(NULL));
    int Execution = (rand() % 20 + 1);
    if (Execution > 9)
    { // Fight an enemy
        srand(time(NULL));
        int EnemyType = (rand() % 10 + 1); // TODO - Add more enemies.
        if (EnemyType < 3)
        {
            CurrentEnemy = new Snake(1, 1, 1, 10);
        }
        else if (EnemyType >= 3 && EnemyType << 10)
        {
            int Level = rand() % 10 + 3;
            CurrentEnemy = new Goblin(rand() % 3 + 1, rand() % 3 + 1, Level, rand() % 20 + Level);
        }
        Fight(Player, CurrentEnemy);
    }
    else if (Execution < 9 && Execution > 4 && Player->getUpgradePoints() > 0)
    { 
        cout << "You can spend your upgrade points to upgrade your character or weapons." << endl;
        cout << "1. Upgrade Character" << endl;
        cout << "2. Upgrade Weapon" << endl;
        cout << "3. Exit" << endl;
        cout << "> ";
        int Choice;
        cin >> Choice;
        cout << endl;
        switch (Choice)
        {
        case 1:
            UpgradePlayer(Player);
            break;
        case 2:
            UpgradeWeapon(Player);
            break;
        default:
            break;
        }
    }
    else
    {
        int Item = rand() % 2 + 1;

        if (Item == 1)
        {
            cout << "You found a health potion!" << endl;
            Player->setHealth(Player->getHealth() + 5);
        }
        else
        {
            cout << "You found a weapon!" << endl;
            Weapon *W = new Weapon("Sword", 5, 5);
            Player->setWeapon(W, Player->getWeaponAmt());
            Player->setWeaponAmt(Player->getWeaponAmt() + 1);
            printNewWeapon(W, Player->getWeaponAmt() - 1);
        }


    }
}