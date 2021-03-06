#include <iostream>
#include <windows.h>
#include "generation.cpp"

using namespace std;

void controls() {
	if (GetAsyncKeyState(VK_DOWN)) {
		int y2 = y + 1;
		
		if (cMap[y2][x] != '#' && cMap[y2][x] != 'G') {
			y++;
			cMap[y][x] = '@';
		}
	}
	if (GetAsyncKeyState(VK_UP)) {
		int y2 = y - 1;

		if (cMap[y2][x] != '#' && cMap[y2][x] != 'G') {
			y--;
			cMap[y][x] = '@';
		}
	}
	if (GetAsyncKeyState(VK_RIGHT)) {
		int x2 = x + 1;

		if (cMap[y][x2] != '#' && cMap[y][x2] != 'G') {
			x++;
			cMap[y][x] = '@';
		}
	}
	if (GetAsyncKeyState(VK_LEFT)) {
		int x2 = x - 1;

		if (cMap[y][x2] != '#' && cMap[y][x2] != 'G') {
			x--;
			cMap[y][x] = '@';
		}
	}

	if (GetAsyncKeyState(VK_ESCAPE)) {
		running = false;
	}
}
