//http://222.22.91.42/view/practice/display.aspx?qid=1061#flag ID1061 一般
#include<iostream>  
using namespace std;
int main()
{
	int m, k, i;
	while (cin >> m >> k, m&&k)
	{
		for (i = 0; m != 0; i++)
		{
			m--;
			if (i%k == 0)
				m++;
		}
		cout << i - 1 << endl;
	}
	return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
	int m, k;
	for (int i=0;;i++)
	{
		cin >> m >> k;
		if (m==0&&k==0)
		{
			break;
		}
		int money[1001];
		int flag = k;
		money[0] = m;
		for (int j=1;j<=1000;++j)
		{
			money[j] = money[j-1] - 1;
			flag--;
			if (!flag)
			{
				money[j]++;
				flag = k;
			}
			if (money[j]==0)
			{
				cout << j<<endl;
				break;
			}
		}
	}
	return 0;
}
*/

