#include <iostream>
using namespace std;
int main()
{
	char date[10];
	cin>>date;
	for(int i=6;i<=9;i++)
		cout<<date[i];
	cout<<'-';
	for(int i=0;i<=4;i++)
		cout<<date[i];
	return 0;
}
