#ifndef GLOBALVAR_H
#define GLOBALVAR_H

#include <iostream>
#include <windows.h>

struct Player {
    int x = 1, y = 4;
    
    int xL = x - 1, xR = x + 1;
    int yU = y - 1, yD = y + 1;

    int health = 100;
    int symbol = '@';
};

struct Goblin {
    int x, y;
    int health = 100;
    int symbol = 'G';
};

#endif