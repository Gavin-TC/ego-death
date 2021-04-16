// handles controls for player

#include <iostream>
#include <windows.h>

#include "globalVar.h"
#include "screen.h"

using namespace std;

int controls() {
    Screen s;
    Player p;

    if(GetAsyncKeyState(VK_UP) && p.yU != '#') {
        p.y--;
        s.screen[p.y][p.y] = '@';
    }
}