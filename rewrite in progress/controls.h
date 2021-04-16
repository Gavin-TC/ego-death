#ifndef CONTROLS_H
#define CONTROLS_H

#include <iostream>
#include <Windows.h>

using namespace std;

#include "globalVar.h"
#include "screen.h"

struct Controls {
    Screen s;
    Player p;

    int controls() {
        if(GetAsyncKeyState(VK_UP)) {
            if(s.screen[p.yU][p.x] != '#') {
                p.y--;
                s.screen[p.y][p.x] = '@';
            }
        }
        if(GetAsyncKeyState(VK_DOWN)) {
            if(s.screen[p.yD][p.x] != '#') {
                p.y++;
                s.screen[p.y][p.x] = '@';
            }
        }
    }
};

#endif