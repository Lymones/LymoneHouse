#include <iostream>
using namespace std;

struct student
{
	bool sex;
	char name[9];
	bool isgroup;
};

int main()
{
	int N;
	cin>>N;
	student data[51];
	for(int i=0; i<N; i++)
	{
		cin>>data[i].sex>>data[i].name;
		data[i].isgroup=false;
	}
	for(int xi=0; xi<N/2; xi++)
	{
		cout<<data[xi].name<<" ";
		for(int yi=N-1; yi>=N/2; yi--)
		{
			if((data[xi].sex!=data[yi].sex)
			&&(data[yi].isgroup==false))
			{
				cout<<data[yi].name<<endl;
				data[yi].isgroup=true;
				break;
			}
		}
	}
	return 0;
}
