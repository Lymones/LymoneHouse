#include <iostream>

using namespace std;

int main()
{
    int n,i,j,s,m;
    char c;
    cin>>n>>c;
    s=n-1;
    for(j=2;2*(2*j-1)<=s;j++)
    {
        s-=4*j-2;
    }
    for(i=1;i<j;i++)
    {
        for(m=1;m<i;m++)
        {
            cout<<" ";
        }
        for(m=2*(j-i)-1;m>0;m--)
        {
            cout<<c;
        }
        cout<<endl;
    }
    for(i=2;i<j;i++)
    {
        for(m=1;m<=(j-1-i);m++)
        {
            cout<<" ";
        }
        for(m=1;m<=2*i-1;m++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    cout<<s;
    return 0;
}
