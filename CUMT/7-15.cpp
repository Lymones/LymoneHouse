#include <iostream>
using namespace std;
int main()
{
	int d,l;char c;
	double m;
	cin>>d>>c;
	m=(d*1.0/2)*10;
	l=(int)m;
	if(l%10>=5)
		l=l/10+1;
	else
		l=l/10;
	
	for(int xi=0;xi<l;xi++)
		{
		for(int yi=0;yi<d;yi++)
			cout<<c; 
		cout<<endl;
		}
	return 0;
}
