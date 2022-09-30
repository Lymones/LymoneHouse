#include <iostream>
using namespace std;
int main()
{
	int N=0,floor=1,sum=1,add=6;
	char sign;
	cin>>N>>sign;
	if(N==1)
	{
		cout<<sign<<endl;
		cout<<'1';
		return 0;
	}
	while(sum<=N)
	{
		sum+=add;
		add+=4;
		++floor;
	}
	add-=4;
	sum-=add;
	--floor;
	//正向打印 
	for(int yi=floor;yi>=1;yi--)
	{
		//打印空格 
		for(int xi=1;xi<=floor-yi;xi++)
			cout<<" ";
		//打印字符 
		for(int xi=1;xi<=yi*2-1;xi++)
			cout<<sign;
		cout<<endl;
	}
	//逆向打印 
	for(int yi=2;yi<=floor;yi++)
	{
		//打印空格 
		for(int xi=1;xi<=floor-yi;xi++)
			cout<<" ";
		//打印字符 
		for(int xi=1;xi<=yi*2-1;xi++)
			cout<<sign;	
		cout<<endl;
	}
	cout<<N-sum;
	return 0;
}
