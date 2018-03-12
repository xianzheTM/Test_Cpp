//http://222.22.91.42/view/practice/display.aspx?qid=1025#flag ID1025 入门
#include<iostream>
using namespace std;

int main()
{
	int n, i, sum = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		if (1 <= i&&i <= 9)
		{
			if ((i*i) % 10 == i)
			{
				sum += 1;
			}
		}
		else if (10 <= i&&i <= 99)
		{
			if ((i*i) % 100 == i)
			{
				sum += 1;
			}
		}
		else if (100 <= i&&i <= 999)
		{
			if ((i*i) % 1000 == i)
			{
				sum += 1;
			}
		}
		else if (999 <= i&&i <= 9999)
		{
			if ((i*i) % 10000 == i)
			{
				sum += 1;
			}
		}
	}
	cout << sum;
	system("pause");
	return 0;
}