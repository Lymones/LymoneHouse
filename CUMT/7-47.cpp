#include <iostream>
using namespace std;

class cp
{
	public:
	char name[4];
	int beath,beat;
	bool asleep;
}; 

int main()
{
	int N;
	cin>>N;
	cp data[10];
	for(int i=0;i<N;i++)
	{
		data[i].asleep=false;
		cin>>data[i].name>>data[i].beath
			>>data[i].beat;
		if(data[i].beath<15||data[i].beath>20)
			data[i].asleep=true;
		if(data[i].beat<50||data[i].beat>70)
			data[i].asleep=true;
	}
	for(int i=0;i<N;i++)
		if(data[i].asleep)
			cout<<data[i].name<<endl;
	return 0;
}
