#include <bits/stdc++.h>
//#include <regex> //C++11
using namespace std;
int main(){
    regex rule1("World");//生成规则对象

    regex rule2("World",regex::icase);
    //regex::icase参数使规则大小写不敏感

    bool ans1 = regex_match("world",rule1);
    bool ans2 = regex_match("world",rule2);
    //匹配函数待匹配字符串，规则；返回值bool型

    smatch match;
    string s="Hello world";
    bool ans3 = regex_search(s.cbegin(),s.cend(),match,rule2);
    for (auto i:match) cout<<i;
    cout<<ans1<<ans2<<ans3;
    return 0;
}