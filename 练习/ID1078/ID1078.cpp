//http://222.22.91.42/view/practice/display.aspx?qid=1078#flag ID1078 一般
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	int array[20][20];
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> array[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		int max = 0;
		bool flag = true;
		int  series = 0;
		for (int j = 0; j < m; ++j)
		{
			if (array[i][j] > max)
			{
				max = array[i][j];
				series = j;
			}
		}
		for (int k = 0; k < n; ++k)
		{
			if (array[k][series] < max)
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			cout << i << " " << series << " " << max;
			break;
		}
	}
	system("pause");
	return 0;
}