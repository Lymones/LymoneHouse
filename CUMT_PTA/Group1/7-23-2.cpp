//ÍõÕ×½Ü cop
#include <iostream>

using namespace std;
int main()
{
	string s;
	int a=0,b=0,c=0,d=0;
	cin >> s;
	int size=s.size();
	for(int i = 0; i < size; i++)
	{
		if(s[i] == 'G' || s[i] == 'g')
		{
			a++;
		}
		else if(s[i] == 'P' || s[i] == 'p')
		{
			b++;
		}
		else if(s[i] == 'L' || s[i] == 'l')
		{
			c++;
		}
		else if(s[i] == 'T' || s[i] == 't')
		{
			d++;
		}
	}
	while(true)
	{
		if(a == 0&&b == 0&&c == 0&&d == 0)
		{
			break;
		}
		if (a != 0)
		{
			cout<<'G';
			a--;
		}
		if (b != 0)
		{
			cout<<'P';
			b--;
		}
		if (c != 0)
		{
			cout<<'L';
			c--;
		}
		if (d != 0)
		{
			cout<<'T';
			d--;
		}
	}
	return 0;
}
