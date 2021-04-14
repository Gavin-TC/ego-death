#include <iostream>
#include <windows.h>
#include <random>

using namespace std;

int gX = 18, gY = 12;

int randNum;

int goblinAI() {
  int randNum = rand() % 2;

  if(randNum == 1) {
   if(gX - x > 0) {
     cMap[gY][gX] = '.';
     gX--;
   }
   if(gX - x < 0) {
     cMap[gY][gX] = '.';
     gX++;
   }
   if(gY - y > 0) {
     cMap[gY][gX] = '.';
     gY--;
   }
   if(gY - y < 0) {
     cMap[gY][gX] = '.';
     gY++;
   }
  }
  return 0;
}