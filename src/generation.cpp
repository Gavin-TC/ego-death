// generates and displays the map

#include <iostream>
#include <windows.h>

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
	"                                 ",
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

char hallwayV[7][5] = { // vertical hallway
    "#..#",
    "#..#",
    "#..#",
    "#..#",
    "#..#",
    "#..#"
};

int Draw() {
    for(int i = 0; i < 20; i++) { // displays the cMap[]
        cout << cMap[i] << endl;
    }

    return 0;
}

int Generate() {


    return 0;
}