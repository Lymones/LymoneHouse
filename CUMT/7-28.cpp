#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
	if (n <= 3)
	{
		return n > 1;
	}
	if (n % 6 != 1 && n % 6 != 5)
	{
		return false;
	}
	int sqrti = (int) sqrt(n);
	for (int i = 5; i <= sqrti; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int N,M;
	cin>>N;
	for(int i=0; i<N; i++)
	{
		cin>>M;
		if(isPrime(M))
		{
			cout<<"Yes";
		}
		else
		{
			cout<<"No";
		}
		cout<<endl;
	}
	return 0;
}
