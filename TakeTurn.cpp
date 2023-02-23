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

void TakeTurn(Player *Player)
{
    Enemies *CurrentEnemy;
    srand(time(NULL));
    int Execution = (rand() % 20 + 6);
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
    else if (Execution < 9 && Execution > 4)
    { // Upgrade
    }
    else
    { // New Weapon or healing item
    }
}