#include <iostream>
using namespace std;
int main()
{
	char input[1001]={};
	cin>>input;
	switch(input[0])
		{
		case '-':
			cout<<"fu";
			break;
		case '0':
			cout<<"ling";
			break;
		case '1':
			cout<<"yi";
			break;
		case '2':
			cout<<"er";
			break;
		case '3':
			cout<<"san";
			break;
		case '4':
			cout<<"si";
			break;
		case '5':
			cout<<"wu";
			break;
		case '6':
			cout<<"liu";
			break;
		case '7':
			cout<<"qi";
			break;
		case '8':
			cout<<"ba";
			break;
		case '9':
			cout<<"jiu";
			break;
		}
	for(int i=1;i<=1000;i++)
	{
		switch(input[i])
		{
		case '-':
			cout<<"fu";
			break;
		case '0':
			cout<<" ling";
			break;
		case '1':
			cout<<" yi";
			break;
		case '2':
			cout<<" er";
			break;
		case '3':
			cout<<" san";
			break;
		case '4':
			cout<<" si";
			break;
		case '5':
			cout<<" wu";
			break;
		case '6':
			cout<<" liu";
			break;
		case '7':
			cout<<" qi";
			break;
		case '8':
			cout<<" ba";
			break;
		case '9':
			cout<<" jiu";
			break;
		}
	}
	return 0;
} 
