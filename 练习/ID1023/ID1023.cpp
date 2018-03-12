//http://222.22.91.42/view/practice/display.aspx?qid=1023#flag ID1023 入门
#include <iostream>
using namespace std;

int main()
{
	int m, n, a, b, c,sum=0;//a,b,c分别为大马，小马，马驹数量
	int flag=0;
	while (cin >> m >> n)
	{
		for (a = 0; a <= 100; a++)
		{
			for (b = 0; b <= 100; b++)
			{
				for (c = 0; c <= 100; c++)
				{
					if (a + b + c == 100)
					{
						flag += 1;
					}
					if (a*m + b*n + (c / 2) == 100)
					{
						flag += 1;
					}
					if (c % 2 == 0)
					{
						flag += 1;
					}
					if (flag == 3)
					{
						sum += 1;
					}
					else
					{
						flag = 0;
					}
				}
			}
		}
		if (sum == 0)
		{
			cout << "no solution" << endl;
		}
		else
		{
			cout << sum << endl;
		}
		sum = 0;
	}
	return 0;


}


