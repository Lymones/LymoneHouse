#include <iostream>
using namespace std;
int main()
{
	char a[10001]={},b[10001]={};
	cin>>a>>b;
	for(int xi=0;xi<=10000;xi++)
	{
		if(b[xi]==0)
			break;
		for(int yi=0;yi<=10000;yi++)
		{
			if(a[yi]==b[xi])
			a[yi]=0;	
		}
		
	}
	for(int xi=0;xi<=10000;xi++)
	{
		if(a[xi]!=0)
			cout<<a[xi];	
	}
	return 0;
}
