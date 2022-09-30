#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
	char num[52];
	cin>>num;
	int no=0,length;
	bool minus=false,doub=false;
	double rate=1;
		
	if(num[0]=='-')
		minus=true;
	
	length=strlen(num);
	
	if((num[length-1]-'0')%2==0)
		doub=true;
		
	if(minus)
		--length;
	for(int i=0;i<52;i++)
	{
		if(num[i]=='2')
			++no;
	}
	
	rate=(1.0*no)/length*
	pow(1.5,minus)*pow(2,doub)*100;
		
	printf("%.2lf%%",rate);
	
	return 0;
}
