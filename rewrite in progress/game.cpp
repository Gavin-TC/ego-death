// main 'hub' for game

#include <iostream>
#include <windows.h>

#include "screen.h"
#include "generate.h"
#include "globalVar.h"
#include "controls.h"

using namespace std;

bool running = true;

int main() {
    Screen s;
    Player p;
    Controls c;

    while(running) {

        system("cls");
        
        s.screen[p.y][p.x] = p.symbol;

        s.draw();
        c.controls();

        for(int i = 0; i < 1; i++) {
            cout << "HP: " << p.health << endl;
            cout << p.yU << endl;
            cout << p.yD << endl;
        }

        system("pause>nul");
    }

    return 0;
}