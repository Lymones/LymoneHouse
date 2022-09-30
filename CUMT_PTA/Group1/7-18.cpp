#include <iostream>
using namespace std;
int main()
{
	char time[6];
	cin>>time;
	int hor,min;
	hor=(time[0]-'0') *10+(time[1]-'0');
	min=(time[3]-'0') *10+(time[4]-'0');
	if((hor>=0&&hor<=11)||(hor==12&&min==0))
	{
		cout<<"Only "<<time<<".  Too early to Dang.";
		return 0;
	}
	if(min>0)
		hor++;
	hor%=13;
	for(int i=0;i<=hor;i++)
		cout<<"Dang";
	return 0;
}
