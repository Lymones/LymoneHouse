#include <bits/stdc++.h>
using namespace std;
bool is_p(long long n)
{
    if(n<2) return false;
    long long max=sqrt(n);
    for(long long i=2;i<=max;i++)
        if(n%i==0) return false;
    return true;
}
int main()
{
    ofstream code("PrimerPrime.cpp",ios::out|ios::trunc);
    long long N;
    cout<<"Please type in the N, I will find the prime from 0 to N"<<endl;
    cin>>N;
    if(N>1e6)cout<<"The N is so big that you need wait"<<endl;
    code<<"#include <iostream>\nusing namespace std;\nint main(){\n";
    code<<"    long long N;\n    cin >> N;\n";
    long long i=-1;
    while(++i!=N)
    {
        code<<"    if ( N == "<<i<<" ){\n        cout << "<<i<<" << \" is ";
        code<<((is_p(i))?"":"not ");
        code<<"a prime\";\n        return 0;\n    }\n";
    }
    code<<"    return 0;\n}";
    cout<<"The CPP code have been placed in your floder, it was named PrimerPrime.cpp"<<endl;
    cout<<"thanks for you use!";
    return 0;
}