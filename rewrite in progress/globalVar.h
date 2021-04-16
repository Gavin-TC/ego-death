#ifndef GLOBALVAR_H
#define GLOBALVAR_H

#include <iostream>
#include <windows.h>

struct Player {
    int x = 1, y = 1;
    int health = 100;
    int symbol = '@';
};

struct Goblin {
    int x, y;
    int health = 100;
    int symbol = 'G';
};

#endif