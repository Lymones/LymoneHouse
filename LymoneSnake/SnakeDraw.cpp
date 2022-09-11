//Draw Frame
#include <stdio.h>
#include <easyx.h>
#include "Snake.h"

extern char map[20][20];

void LSD::drawNet()
{
    printf("PrintNet\n");
    setlinecolor(0xFFFFFF);
    for (int i = 0; i <= 20; i++)
        line(25 * i, 0, 25 * i, 500);
    for (int i = 0; i <= 20; i++)
        line(0, 25 * i, 500, 25 * i);
    return;
}

void LSD::drawMap()
{
    printf("PrintMap\n");
    for (int xi = 0; xi < 20; xi++)
        for (int yi = 0; yi < 20; yi++)
        {
            short x = 25 * xi, y = 25 * yi;
            switch (map[xi][yi])
            {
            case 'w':
            case 'W':
                setfillcolor(0x2a2aa5);
                setlinecolor(0x2a2aa5);
                fillrectangle(x + 1, y + 1, x + 24, y + 24);
                break;
            case 'h':
            case 'H':
                setfillcolor(0x0000ff);
                setlinecolor(0x0000ff);
                fillcircle(x + 13, y + 13, 11);
                break;
            case 's':
            case 'S':
                setfillcolor(0xffffff);
                setlinecolor(0xffffff);
                fillcircle(x + 13, y + 13, 11);
                break;
            case 'a':
            case 'A':
                setfillcolor(0x6600aa);
                setlinecolor(0x00ff00);
                fillcircle(x + 13, y + 13, 11);
                break;
            }
        }
    return;
}
//cleardevice();//Çå¿Õ»æ°æ
void LSD::cleanmap()
{
    for (int xi = 0; xi < 20; xi++)
        for (int yi = 0; yi < 20; yi++)
        {
            if (map[xi][yi] == 'S')
                map[xi][yi] = 0;
            if (map[xi][yi] == 'H')
                map[xi][yi] = 0;
        }
    return;
}