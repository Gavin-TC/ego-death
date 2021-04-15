// main 'hub' for game

#include <iostream>
#include <windows.h>

#include "screen.h"
#include "generate.h"
#include "globalVar.h"

using namespace std;

bool running = true;

int main() {
    while(running) {
        system("cls");

        draw();

        screen[y][x] = player;

        system("pause>nul");
    }

    return 0;
}