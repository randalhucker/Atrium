#pragma once
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string>
#include <cstdlib>
#include "Player.h"
#include "Weapon.h"

void UpgradePlayer(Player *Player){
    cout << "You have " << Player->getUpgradePoints() << " upgrade points." << endl;

    cout << "What would you like to upgrade?" << endl;

    cout << "1. Attack" << endl;
    cout << "2. Defense" << endl;
    cout << "3. Health" << endl;
    cout << "4. Exit" << endl;

    cout << "> ";
    int Choice;
    cin >> Choice;
    cout << endl;

    switch (Choice)
    {
    case 1:
        Player->setAttack(Player->getAttack() + 1);
        Player->setUpgradePoints(Player->getUpgradePoints() - 1);
        break;
    case 2:
        Player->setDefense(Player->getDefense() + 1);
        Player->setUpgradePoints(Player->getUpgradePoints() - 1);
        break;
    case 3:
        Player->setHealth(Player->getHealth() + 10);
        Player->setUpgradePoints(Player->getUpgradePoints() - 1);
        break;
    case 4:
        break;
    default:
        cout << "Invalid choice." << endl;
        break;
    }
}

void UpgradeWeapon(Player *Player){
    cout << "You have " << Player->getUpgradePoints() << " upgrade points." << endl;

    cout << "Which weapon would you like to upgrade?" << endl;
    
    for (int i = 0; i < Player->getWeaponAmt(); i++)
    {
        cout << i + 1 << ". " << Player->getWeapon(i)->getName() << endl;
    }

    cout << Player->getWeaponAmt() + 1 << ". Exit" << endl;

    cout << "> ";
    int WChoice;
    cin >> WChoice;
    cout << endl;

    if (WChoice == Player->getWeaponAmt() + 1)
    {
        return;
    }

    cout << "What would you like to upgrade?" << endl;

    cout << "1. Attack" << endl;
    cout << "2. Defense" << endl;
    cout << "3. Exit" << endl;

    cout << "> ";
    int Choice;
    cin >> Choice;
    cout << endl;

    switch (Choice)
    {
    case 1:
        Player->getWeapon(WChoice-1)->setAttack(Player->getWeapon(0)->getAttack() + 1);
        Player->setUpgradePoints(Player->getUpgradePoints() - 1);
        break;
    case 2:
        Player->getWeapon(0)->setDefense(Player->getWeapon(0)->getDefense() + 1);
        Player->setUpgradePoints(Player->getUpgradePoints() - 1);
        break;
    case 3:
        break;
    default:
        cout << "Invalid choice." << endl;
        break;
    }
}