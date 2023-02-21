#pragma once
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string>
#include <cstdlib>
#include "Player.h"

using namespace std;

void PrintIntro();
Player *InitializePlayer();
void TakeTurn(Player *Player);

int main()
{
    string ContinueGame;
    PrintIntro();

    Player *Player = InitializePlayer();

    cout << "It's time for your adventure! Continue? (y/n)" << endl;
    cout << "> ";
    cin >> ContinueGame;
    cout << endl;
    while (ContinueGame == "y")
    {
        TakeTurn(Player);
        cout << "Adventurer... do you want to continue? (y/n)" << endl;
        cout << "> ";
        cin >> ContinueGame;
        cout << endl;
    }
    cout << "To bad... until next time!";
    return 0;
}