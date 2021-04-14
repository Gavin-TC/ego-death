#include <iostream>
#include <windows.h>

using namespace std;

char cMap[21][34] = {
	"#################################",
	"#@..............................#",
	"#...............................#",
	"#...............................#",
	"#...............................#",
	"#...............................#",
	"#...............................#",
	"#...............................#",
	"#...............................#",
	"#...............................#",
	"#...............................#",
	"#...............................#",
	"#...............................#",
	"#...............................#",
	"#...............................#",
	"#...............................#",
	"#...............................#",
	"#...............................#",
	"#################################"
};

bool running = true;
bool alive = true;

int x = 1, y = 1;
int health = 100;
int eX, eY; // exit x and y

#include "controls.cpp" // includes the controls file after the instantation of the variables in which it uses
#include "goblinAI.cpp"

int main() {
	while (running) {

    controls();

		//cMap[eX][eY] = 'E';
    cMap[gY][gX] = 'G';
	cMap[y][x] = '@';

    system("cls");

		for (int i = 0; i < 20; i++) {
			cout << cMap[i] << endl;
		}
		for(int i = 0; i < 1; i++) {
			cout << "HP: " << health << endl;
			cout << "RANDOM NUMBER " << randNum << endl;
		}

		if(cMap[y][x] == cMap[gY][gX]) {
			health--;
		}
		if(health == 0) {
			alive = true;
			running = false;
		}

		system("pause>nul");
	}

  return 0;
}
