#include <stdio.h>
#include <easyx.h>
#include "Snake.h"

char map[20][20];
void initMap()
{
    for (int xi = 0; xi < 20; xi++)
        for (int yi = 0; yi < 20; yi++)
        {
            map[xi][yi] = 0;
        }
    return;
}

//Head Snake Wall Apple
//block 25*25
void testData();

int main()
{
    initgraph(700, 505, EW_SHOWCONSOLE);
    printf("==ConsolLoaded==\n");
    
    LSD::drawNet();
    testData();
    LSD::drawMap();

    getchar();

    closegraph();//关闭绘图窗口
    return 0;
}

void testData()
{
    //testdata devonly
    printf("TestDataLoading\n");
    map[1][1] = 'W';
    map[2][2] = 'S';
    map[3][3] = 'W';
    map[4][4] = 'S';
    map[5][5] = 'W';
    map[6][6] = 'S';
    map[7][7] = 'A';
    map[8][8] = 'H';
    map[9][9] = 'A';
    map[10][10] = 'H';
}