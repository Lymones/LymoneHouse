#include <iostream>
#include <Easyx.h>
using namespace std;

using namespace std;
char map[20][20] = {};
//block 25*25

int main()
{
    initgraph(700, 505, EW_SHOWCONSOLE);
    printf("==ConsolLoaded==\n");

    
    {
        printf("PrintNet\n");
        setlinecolor(0xFFFFFF);
        for (int i = 0; i <= 20; i++)
            line(25 * i, 0, 25 * i, 500);
        for (int i = 0; i <= 20; i++)
            line(0, 25 * i, 500, 25 * i);
    }

    {
        printf("PrintTestSnake\n");
        map[]
    }

    getchar();

    closegraph();//关闭绘图窗口
	return 0;
}