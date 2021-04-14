#include <iostream>
#include <windows.h>

using namespace std;

int gX = 18, gY = 12;

DWORD lastGoblinMoveTime = 0;

int goblinAI() {

  DWORD dwTime = GetTickCount();
  DWORD elapsed = dwTime - lastGoblinMoveTime;

  if (elapsed > 500) {

    lastGoblinMoveTime = dwTime;

    if(gX - x > 0) {
      cMap[gY][gX] = '.';
      gX--;
    } else if(gX - x < 0) {
      cMap[gY][gX] = '.';
      gX++;
  }
  return 0;
}