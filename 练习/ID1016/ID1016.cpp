//http://222.22.91.42/view/practice/display.aspx?qid=1016#flag ID1016 入门
#include <iostream>
using namespace std;

int main()
{
	int i, j, s=0, n, temp=0;
	cin >> n;
	for (i=100;i<=n;i++)
	{
		for (j = 1;j<=i;j++)
		{
			if (i%j==0)
			{
				temp += 1;
			}
		}
		
		if (temp == 2)
		{
			s = s + i;
		}
		temp = 0;//对数字被除计数清零
	}
	cout << s;
	system("pause");


}