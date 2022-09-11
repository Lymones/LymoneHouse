#include <iostream>
using namespace std;
int main()
{
	int D;
	cin>>D;
	if(D==7)
	{
		cout<<"2";
		return 0;
	}
	D+=2;
	D%=8;
	if(D==0)
		D=1;
	cout<<D;
	return 0;
}
