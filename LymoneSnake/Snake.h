
#ifndef SNAKEDRAW_H
#define SNAKEDRAW_H

namespace LSD
{
	void drawNet();
	void drawMap();
	void cleanmap();
}

#endif 


#ifndef SNAKECHECK_H
#define SNAKECHECK_H

namespace LSC
{
	void randapple();
}

#endif


#ifndef SNAKEDATA_H
#define SNAKEDATA_H

class sNode
{
public:
	short x, y;
	sNode* snext;
};

class Linkqueue
{
	//链队列-逆
	//删尾加头 
public:
	void initQ();
	void enQ(short xx, short yy);
	bool deQ();
	void destoryQ();
	void printQ();//devOnly 
	short countQ();
	bool pmapQ();
private:
	sNode* front;
	sNode* rear;
};

#endif
