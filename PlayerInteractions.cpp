#pragma once
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string>
#include <cstdlib>
#include "Player.h"
#include "Barbarian.h"

using namespace std;

void ShowClassMenu();
void GetFirstWeapon(Player *User);

ClassChoice *ClassChoiceResponse(int ClassChoiceNumber)
{
    switch (ClassChoiceNumber)
    {
    case 1:
        cout << "You're a barbarian! Strong and versatile in battle!" << endl;
        cout << endl;
        return (new Barbarian());
    default:
        cout << "You have an invalid class!" << endl;
        return (new ClassChoice());
    }
}

Player *InitializePlayer()
{
    cin.ignore();
    string Name;
    int classChoice;
    cout << "Now let's find out who you are..." << endl;
    cout << "What's your name adventurer?" << endl;
    cout << "> ";
    getline(cin, Name);
    cout << endl;

    cout << "Nice to meet you, " << Name << "! What is your class?" << endl;
    ShowClassMenu();
    cin >> classChoice;
    cout << endl;
    ClassChoice *ChosenClass = ClassChoiceResponse(classChoice);
    Player *User = new Player(Name, 0, 0, ChosenClass);
    GetFirstWeapon(User);
    return (User);
}