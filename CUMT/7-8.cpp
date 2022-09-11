#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	short A,B,num,sum=0;
	cin>>A>>B;
	num=B-A+1;
	for(int i=1;i<=num;i++)
	{
		sum+=A;
		printf("%5d",A);
		if(i%5==0&&i!=num)
			cout<<endl;
		A++;
	}
	cout<<endl;
	cout<<"Sum = "<<sum;
	return 0; 
 } 
