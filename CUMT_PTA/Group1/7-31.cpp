#include <iostream>
#include <cmath>
using namespace std;

struct P
{
	double H,W;
	double std;
};

int main()
{
	int N;
	cin>>N;
	P data[20];
	for(int i=0;i<N;i++)
	{
		cin>>data[i].H>>data[i].W;
		data[i].std=(data[i].H-100)*0.9*2;
	}
	for(int i=0;i<N;i++)
	{
		if(abs(data[i].W-data[i].std)<data[i].std*0.1)
			cout<<"You are wan mei!";
		else if(data[i].W>data[i].std)
				cout<<"You are tai pang le!";
			else
				cout<<"You are tai shou le!";
		cout<<endl;
		
	}
	return 0;
}
