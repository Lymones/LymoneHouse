#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int> v;
int main()
{
    for(int i =0 ;i<40;i++)
    {
        v.push_back(i);
    }
    vector<int>::iterator im = v.begin()+10;
    vector<int>::iterator in = v.begin()+30;
    v.erase(im,in);//erase something between im&in
    //im&in must be iteator
    vector<int>::iterator it = v.begin();
    while(it != v.end())
    //v.end point to the next of the true end of vector
    {
        //cout<<it[i]<<endl;
        cout<<*it<<endl;
        //think iteator as pointer
        it++;
    }
    return 0;
}