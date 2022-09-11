#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char name[1001][11];
	int sum=0;
	while(cin>>name[sum])
	{
		if(name[sum][0]!='.')
			sum++;
		else
			break;
	}
	if(sum>=2)
	{
		if(sum>=14)
		{
			cout<<name[1]<<" and "
				<<name[13]
				<<" are inviting you to dinner...";
		}
		else
		cout<<name[1]<<" is the only one for you...";
	}
	else
		cout<<"Momo... No one is for you ...";
	return 0;
}
