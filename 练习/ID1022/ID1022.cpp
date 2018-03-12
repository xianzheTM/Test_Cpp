//http://222.22.91.42/view/practice/display.aspx?qid=1022#flag ID1022 入门
#include <iostream>
using namespace std;
int main()
{
	int n, m,i,j,s=0;
	cin >> m >> n;
	bool flag=true;
	for (j=m;j<=n;j++)
	{
		for (i = 2; i <= sqrt(j*1.0); i++)
		{
			if (j%i == 0)
			{
				flag = false;
				break;
			}
		}
		if (flag == true)
		{
			s += 1;
		}
		flag = true;
	}
	cout << s;
	system("pause");
	return 0;

}