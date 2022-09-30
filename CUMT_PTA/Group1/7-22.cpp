#include <iostream>
using namespace std;
int main()
{
	int N;
	long long n;
	int j=0,o=0;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>n;
		if(n%2==0)
			o++;
		else
			j++;
	}
	cout<<j<<" "<<o;
	return 0;
}
