#include <iostream>
using namespace std;
int main()
{
	char a[55]={};
	cin>>a;
	bool flag=false,flag2=false;
	int num=0,rare;
	double rate=100;
	if(a[0]=='-')
		flag=true;
	for(int i=0;i<=51;i++)
	{
		if(a[i]=='2')
			num++;
		if(a[i]==0)
			{
				rare=i-1;
				break;
			}
	}

	if(flag)
		rate*=num/(rare-1)*1.5;
	else
		rate*=num/rare;
	if((a[rare]-'0')%2==0)
		rate*=2;
	cout<<rare<<'%';
	return 0;
}
