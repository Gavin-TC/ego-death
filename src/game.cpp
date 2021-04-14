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

int x = 1, y = 1;
int health = 100;
int eX, eY; // exit x and y

#include "controls.cpp" // includes the controls file after the instantation of the variables in which it uses
#include "goblinAI.cpp"

int main() {
	while (running) {

    controls();
    goblinAI();

		//cMap[eX][eY] = 'E';
	cMap[y][x] = '@';
    cMap[gY][gX] = 'G';

    system("cls");

		for (int i = 0; i < 20; i++) {
			cout << cMap[i] << endl;
		}
		for(int i = 0; i < 1; i++) {
			cout << "HP: " << health << endl;
		}

		if(cMap[y][x] == cMap[gY][gX]) {
			health--;
		}

		system("pause>nul");
	}

  return 0;
}
