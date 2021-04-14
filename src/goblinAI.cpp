#include <iostream>
#include <windows.h>
#include <random>
#include "generation.cpp"

using namespace std;

int gX = 18, gY = 12;
int gXL = x - 1; // to the left of goblin
int gXR = x + 1; // to the right of goblin
int gYB = y - 1; // below goblin
int gYA = y + 1; // above goblin

int randNum;

int goblinAI() {
  int randNum = rand() % 2;

  if(randNum == 1) {

    if(gX - x > 0 && x + 1 != cMap[y][x]) {
      cMap[gY][gX] = '.';
      gX--;
    }
    if(gX - x < 0 && x - 1 != cMap[y][x]) {
      cMap[gY][gX] = '.';
      gX++;
    }
    if(gY - y > 0 && gY - 1 != cMap[y][x]) {
      cMap[gY][gX] = '.';
      gY--;
    }
    if(gY - y < 0 && gY + 1 != cMap[y][x]) {
      cMap[gY][gX] = '.';
      gY++;
    }

  }
  return 0;
}