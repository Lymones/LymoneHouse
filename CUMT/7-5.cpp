#include <iostream>
using namespace std;
struct Number
{
	char no[17];
	short c1,c2;
};
int main()
{
	short N,M;
	Number S[1001];
	cin>>N;
	for (int i=0;i<N;i++)
	{
		cin>>S[i].no>>S[i].c1>>S[i].c2;
	}
	cin>>M;
	int cs;
	for (int i=0;i<M;i++)
	{
		cin>>cs;
		for (int i=0;i<N;i++)
		{
		if(S[i].c1==cs)
			{
				cout<<S[i].no<<" "
					<<S[i].c2<<endl;
				continue;
			}
		}
	}
	return 0;
}
