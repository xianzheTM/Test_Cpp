//http://222.22.91.42/view/practice/display.aspx?qid=1035#flag ID1035 һ�㣨ˮ�⣩
#include <iostream>
using namespace std;
int main()
{
	int i, j, n,sum=0,sum1=0;
	cin >> n;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			sum1 = sum1 + j;
		}
		sum = sum + sum1;
		sum1 = 0;
	}
	cout << sum;
	system("pause");
	return 0;
}