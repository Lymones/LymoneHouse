#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int res = 0, begin = 0;//最长记录
	for (int i = 2; i <= n / i; i ++ )
	{
		if (n % i)
			continue;
		int cnt = 1, num = i;//目前记录
		for (int j = i + 1; j <= n; j ++ )
		{
			if ((n / num) % j == 0 && num * j <= n)
				num *= j, cnt ++ ;
			else break;
		}
		if (cnt > res)
			res = cnt, begin = i;
	}
	if (!res)
	{
		printf("1\n%d", n);
		return 0;
	}
	printf("%d", res);
	for (int i = begin; i < begin + res; i ++ )
	{
		printf("%c%d", "*\n"[i==begin], i);
	}
	return 0;
}
