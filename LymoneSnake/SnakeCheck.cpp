//Check Frame
#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include "Snake.h"

extern char map[20][20];

void LSC::randapple()
{
	srand(time(0));
	short xi, yi;
	loop:
	xi = rand() % 20;
	yi = rand() % 20;
	if (map[xi][yi] == 0)
		map[xi][yi] = 'A';
	else
		goto loop;
	return;
}
