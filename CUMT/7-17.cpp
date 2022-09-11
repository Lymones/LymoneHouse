#include <iostream>
using namespace std;
int main()
{
	int N,cpass[100]= {};
	char id[100][18];
	short q[17]= {7,9,10,5,8,4,2,1,6,
	              3,7,9,10,5,8,4,2
	             };
	char code[11]= {'1','0','X','9','8',
	                '7','6','5','4','3','2'
	               };
	bool pass[100]= {},AllPass=false;
	cin>>N;
	for(int i=0; i<N; i++)
		cin>>id[i];
	for(int xi=0; xi<N; xi++)
	{
		cpass[xi]=0;
		for(int yi=0; yi<17; yi++)
		{
			cpass[xi]+=q[yi]*(id[xi][yi]-'0');
		}
		if(code[cpass[xi]%11]!=id[xi][17])
		{
			AllPass=true;
			for(int zi=0; zi<=17; zi++)
			{
				cout<<id[xi][zi];
			}
			cout<<endl;
			//cout<<id[xi]<<endl;
		}
	}
	if(AllPass==false)
		cout<<"All passed";
	return 0;
}
