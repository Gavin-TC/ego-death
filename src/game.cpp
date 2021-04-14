#include <iostream>
#include <windows.h>

using namespace std;

bool running = true;
bool alive = true;

int x = 1, y = 1;
int eX, eY; // exit x and y (not being used currently)

int xL = x - 1; // to the left of player
int xR = x + 1; // to the right of player

int yB = y - 1; // below player
int yA = y + 1; // above player 

int health = 100;

#include "controls.cpp" // includes the controls file after the instantation of the variables in which it uses
#include "goblinAI.cpp" // includes instructions for goblin's AI
#include "generation.cpp" // includes map generation and map drawing

int main() {
	Generate();

	while (running) {

    controls();
	goblinAI();

	//cMap[eX][eY] = 'E';
    cMap[gY][gX] = 'G';
	cMap[y][x] = '@';


    system("cls");

		Draw();

		if(cMap[y][x] == cMap[gY][gX]) {
			health--;
		}
		
		if(health == 0) {
			alive = true;
			running = false;
		}

		system("pause>nul");
	}

	cout << "Player has died or quite the game." << endl; // replace this with exit(); and create death screen.

  return 0;
}
