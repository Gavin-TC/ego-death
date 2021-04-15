// generates and displays the map

#include <iostream>
#include <windows.h>
#include <random>

using namespace std;

char cMap[21][34] = {
	"                                 ",
	"                                 ",
	"                                 ",
	"                                 ",
	"                                 ",
	"                                 ",
	"                                 ",
	"                                 ",
	"#################################",
	"                                 ",
	"                                 ",
	"                                 ",
	"                                 ",
	"                                 ",
	"                                 ",
	"                                 ",
	"                                 ",
	"                                 ",
	"                                 "
};

char startRoom[6][12] = {
    "###########",
    "#.........#",
    "#.........#",
    "#.........#",
    "###########"
};

char hallwayH[4][7] = { // horizontal hallway
    "######",
    "......",
    "######"
};

char hallwayV[6][4] = {
    " . ",
    " . ",
    " . ",
    " . ",
    " . "
};

int generate() {
    int randQuad = rand() % 4 + 1; // generates random number and places a startroom at a quadrant dependent on the number
    if(randQuad == 1) {
        // cMap[1][1] + startRoom[];
    }

    return 0;
}

int draw() {
    for(int i = 0; i < 20; i++) { // displays the cMap[]
        cout << cMap[i] << endl;
    }

    return 0;
}