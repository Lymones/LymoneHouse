#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int N,len;
	char c,data[100001];
	cin>>N>>c;
	cin.get();
	cin.getline(data,100001);
	len=strlen(data);
	if(N>len)
	{
		int delta=N-len;
		for(int i=0; i<delta; i++)
			cout<<c;
		cout<<data;
	}
	else
	{
		int delta=len-N;
		for(int i=delta; i<len; i++)
			cout<<data[i];
	}
	return 0;
}
