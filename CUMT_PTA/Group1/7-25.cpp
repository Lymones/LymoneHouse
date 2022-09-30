#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;
int main()
{
	char A[10001],B[10001];
	cin>>A;
	cin.get();
	cin.getline(B,101);

	bool isA=true,isB=true;
	int lenA,lenB;
	int nA=0,nB=0,sum;
	lenA=strlen(A);
	lenB=strlen(B);

	for(int i=0; i<lenA; i++)
	{
		nA*=10;
		nA+=A[i]-'0';
		if(!isdigit(A[i]))
		{
			isA=false;
			break;
		}

	}

	for(int i=0; i<lenB; i++)
	{
		nB*=10;
		nB+=B[i]-'0';
		if(!isdigit(B[i]))
		{
			isB=false;
			break;
		}

	}

	sum=nA+nB;
	if(nA<1||nA>1000)
		isA=false;
	if(nB<1||nB>1000)
		isB=false;
	if(!isA)
		cout<<'?';
	else
		cout<<nA;
	cout<<" + ";
	if(!isB)
		cout<<'?';
	else
		cout<<nB;
	cout<<" = ";
	if((!isA)||(!isB))
		cout<<'?';
	else
		cout<<sum;
	return 0;
}
