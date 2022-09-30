#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char A[10001],B[10001];
	cin.getline(A,10001);
	cin.getline(B,10001);
	int lenA,lenB;
	lenA=strlen(A);
	lenB=strlen(B);
	for(int xi=0;xi<lenA;xi++)
	{
		for(int yi=0;yi<lenB;yi++)
		{
			if(A[xi]==B[yi])
				A[xi]=0;
		}
	}
	for(int xi=0;xi<lenA;xi++)
	{
			if(A[xi]!=0)
				cout<<A[xi];
	}
	return 0; 
}
