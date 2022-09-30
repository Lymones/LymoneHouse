#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int N;int K;int L;
	int tag[1001]={};
	int max=-1,maxtag;
	
	cin>>N;
	for (int xi=0;xi<N;xi++)
	{
		cin>>K;
		for(int yi=0;yi<K;yi++)
		{
			cin>>L;
			tag[L]++;
		}
	}
	for (int xi=0;xi<=1000;xi++)
	{
		if(tag[xi]>=max)
		{
			maxtag=xi;
			max=tag[xi];
		}

	}
	cout<<maxtag<<" "<<max;
	return 0;
}
