#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string>
#include <cstdlib>

using namespace std;

void PrintIntro()
{
    cout << "|--------------------------|" << endl;
    cout << "|                          |" << endl;
    cout << "|   You Enter the Atrium   |" << endl;
    cout << "|                          |" << endl;
    cout << "|--------------------------|" << endl;
    cout << endl
         << "Press 'Enter' to Continue" << endl;
}

void ShowClassMenu()
{
    cout << endl;
    cout << "These are the currently avaialbe classes:" << endl;
    cout << "Enter 1 to be a barbarian (+5 Atk, +5 Def)." << endl;
    cout << "> ";
}