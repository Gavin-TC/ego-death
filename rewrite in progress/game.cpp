// main 'hub' for game

#include <iostream>
#include <windows.h>

#include "screen.h"
#include "generate.h"
#include "globalVar.h"

using namespace std;

bool running = true;

int main() {
    Screen s;
    Player p;

    while(running) {

        system("cls");
        
        s.screen[p.y][p.x] = p.symbol;

        s.draw();

        for(int i = 0; i < 1; i++) {
            cout << "HP: " << p.health << endl;
        }

        system("pause>nul");
    }

    return 0;
}