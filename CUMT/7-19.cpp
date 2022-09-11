#include <iostream>
using namespace std;
int main()
{
	int maxA,maxB,N;
	int drinkA=0,drinkB=0;
	cin>>maxA>>maxB>>N;
	int data[100][4];
	for(int xi=0;xi<N;xi++)
	{
		for(int yi=0;yi<4;yi++)
		cin>>data[xi][yi];
	}
	for(int xi=0;xi<N;xi++)
	{
		if((data[xi][0]+data[xi][2]==data[xi][1]
		||data[xi][0]+data[xi][2]==data[xi][3])
		&&data[xi][1]!=data[xi][3])
		{
			drinkA+=(data[xi][0]+data[xi][2]==data[xi][1]);
			drinkB+=(data[xi][0]+data[xi][2]==data[xi][3]);
		}
		if(drinkA>maxA)
		{
			cout<<'A'<<endl;
			cout<<drinkB;
			return 0;
		}
		if(drinkB>maxB)
		{
			cout<<'B'<<endl;
			cout<<drinkA;
			return 0;
		}
	}
}
