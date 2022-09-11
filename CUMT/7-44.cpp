#include <iostream>
using namespace std;
int main()
{
	int K,times=0;
	cin>>K;
	string enermy;
	while(cin>>enermy)
	{
		if(enermy=="End")
		{
			break;
		}
		else
		{
			if(times%(K+1)==K)
			{
				cout<<enermy<<endl;
			}
			else
			{
				if(enermy=="ChuiZi")
					cout<<"Bu"<<endl;
				if(enermy=="Bu")
					cout<<"JianDao"<<endl;
				if(enermy=="JianDao")
					cout<<"ChuiZi"<<endl;
			}
		}
		times++;
	}
	return 0;
}
