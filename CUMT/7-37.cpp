#include <iostream>
using namespace std;
int main()
{
	int A,B;
	cin>>A>>B;
	if(B==0)
		printf("%d/0=Error",A);
	else if(B<0)
		printf("%d/(%d)=%.2lf",A,B,1.0*A/B);
	else
		printf("%d/%d=%.2lf",A,B,1.0*A/B);
	return 0;
}
