#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[10001];
	cin>>str;
	int len=strlen(str);
	int nG=0,nP=0,nL=0,nT=0;

	for(int i=0; i<len; i++)
	{
		switch(str[i])
		{
			case 'g':
			case 'G':
				nG++;
				break;
			case 'p':
			case 'P':
				nP++;
				break;
			case 'l':
			case 'L':
				nL++;
				break;
			case 't':
			case 'T':
				nT++;
				break;
			default:
				break;
		}
	}
	int sum=nG+nP+nL+nT;
	for(int i=0; i<sum; i++)
	{
		if(nG)
		{
			cout<<'G';
			--nG;
		}
		if(nP)
		{
			cout<<'P';
			--nP;
		}
		if(nL)
		{
			cout<<'L';
			--nL;
		}
		if(nT)
		{
			cout<<'T';
			--nT;
		}
	}
	return 0;
}
