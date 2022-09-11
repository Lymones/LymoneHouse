#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int N;char sex;double H;
	cin>>N;
	for (int i=0;i<N;i++)
	{
		cin>>sex>>H;
		if(sex=='M')
			printf("%.2lf\n",H/1.09);
		else
			printf("%.2lf\n",H*1.09); 
	}
	return 0;
}
