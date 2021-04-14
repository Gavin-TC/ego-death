#include <iostream>
#include <windows.h>
#include <random>

using namespace std;

int gX = 18, gY = 12;

int randNum = rand() % 2;

int goblinAI() {
  for(int i = 0; i < 500; i++) {
    randNum = rand() % 2;
  }

  if(randNum == 1) {
    if(gX - x > 0) {
      cMap[gY][gX] = '.';
      gX--;
    } else if(gX - x < 0) {
      cMap[gY][gX] = '.';
      gX++;
    }
  }
  return 0;
}