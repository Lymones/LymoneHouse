#include <iostream>
using namespace std;
int main()
{
	int tot[10]={};
	char num[1001]={};
	cin>>num;
	for(int i=0;i<=1000;i++)
	{
		if(num[i]>=48&&num[i]<=57)
		{
			tot[num[i]-48]++; 
		}
	}
	for(int i=0;i<=9;i++)
	{
		if (tot[i]!=0)
		{
			cout<<i<<":"<<tot[i]<<endl;
		}
	}
	return 0;
}
