#include <iostream>
using namespace std;
int main()
{
	int N,num=0,ji=1;
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		ji*=i;
		num+=ji;
	}
	cout<<num;
	return 0;
}
