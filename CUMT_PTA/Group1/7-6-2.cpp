#include <bits/stdc++.h>
using namespace std;

int main()
{
	long N,temp; //int会出现浮点错误
	int start=0,len=0;
	cin >> N;
	for(int i=2; i<=sqrt(N); i++)
	{
		temp = 1;
		for(int j=i; temp*j<=N; j++)
		{
			temp *= j;
			if(N%temp==0 && j-i+1>len) // 记录最长的连乘因子
			{
				start = i; //更新起始数据
				len = j-i+1; //更新长度
			}
		}
	}
	if(start==0) //质数
		cout << "1" << '\n' << N;
	else  //非质数
	{
		cout << len << '\n' << start;
		for(int i=start+1; i<start+len; i++)
		{
			cout << "*" << i;
		}
	}
	return 0;
}

