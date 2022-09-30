#include <iostream>
#include <cmath>
using namespace std;
bool in[1073741826]= {}; //2^30+2
long long maxlen=-1,maxstart;
long long N;
int main()
{


	cin>>N;
	long long qN=sqrt(N);
	for(long long i=qN; i>=2; i--)
	{
		if(N%i==0)
		{
			in[i]=true;
		}
	}
	// search()
	{
		long long start,len=0;
		bool flag=false;
		for(int i=2; i<=qN; i++)
		{
			if(in[i])
			{
				if(!flag)
				{
					flag=true;
					start=i;
				}
				len++;
			}
			else
			{
				flag=false;
				if(len>maxlen)
				{
					maxlen=len;
					maxstart=start;
				}
				len=0;
			}
		}

	}
	// print()
	{
		if(maxlen==-1)
		{
			cout<<'1'<<endl<<N<<endl;
			return 0;
		}
		cout<<maxlen<<endl;
		if(maxlen==1)
		{
			cout<<maxstart<<endl;
		}
		else
		{
			cout<<maxstart;
			for(long long i=maxstart+1; i<maxstart+maxlen; i++)
			{
				cout<<'*'<<i;
			}
			cout<<endl;
		}
	}

	return 0;
}
