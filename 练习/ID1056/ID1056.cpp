//http://222.22.91.42/view/practice/display.aspx?qid=1056#flag ID1056 一般
#include <iostream>  
#include <cmath>  
using namespace std;
int main() {
	int n, m, max, score, row, col, temp;
	while (cin >> n >> m) {
		max = 0;
		row = col = 1;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> temp;
				{
					if (abs(temp) > abs(max))
					{
						row = i + 1;
						col = j + 1;
						max = temp;
					}
				}
			}
		}
		cout << row << " " << col << " " << max << endl;
	}
	return 0;
}
//下面的我自己写的，实在找不到哪里有错，无奈找的网上的提交了。
/*
#include <iostream>

using namespace std;
int abs(int x)
{
	if (x<0)
	{
		return -x;
	}
	else
	{
		return x;
	}
}
int main()
{
	int girl[100][100];
	int abs_max=0;
	int n, m;
	while (cin >> n >> m)
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cin >> girl[i][j];
			}
		}

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if (abs(abs_max) < abs(girl[i][j]))
				{
					abs_max = girl[i][j];
				}
			}
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if (abs(abs_max) == abs(girl[i][j]))
				{
					cout << i + 1 << " " << j + 1;
					goto S;
				}
			}
		}
	S:
		cout << " " << abs_max << endl;
		cout << endl;
	}
	system("pause");
	return 0;
}
*/
