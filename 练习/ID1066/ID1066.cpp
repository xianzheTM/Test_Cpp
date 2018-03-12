//http://222.22.91.42/view/practice/display.aspx?qid=1066#flag ID1066 一般
#include <iostream>
using namespace std;
int main()
{
	int m, n;
	int array[10][10];
	int tran_array[10][10];
	cin >> m >> n;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> array[i][j];
		}
	}
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			tran_array[j][i] = array[i][j];
		}
	}
	for (int i = 0; i < n; ++i)//注意交换行列大小
	{
		for (int j = 0; j < m; ++j)
		{
			if (j!=m-1)
			{
				cout << tran_array[i][j] << " ";
			}
			else
			{
				cout << tran_array[i][j];
			}
			if (j==m-1)
			{
				cout << endl;
			}
		}
	}
	system("pause");
	return 0;
}