//http://222.22.91.42/view/practice/display.aspx?qid=1054#flag ID1054 一般
#include <iostream>
using namespace std;
int main()
{
	int array[10][10];
	int n;
	int sum=0;
	cin >> n;
	for (int i=0;i<n;++i)//i行
	{
		for (int j = 0; j < n; ++j)//j列
		{
			cin >> array[i][j];
		}
	}
	for (int i = 0; i<n; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			sum = sum + array[i][j];
		}
	}
	cout << sum;
	system("pause");
	return 0;
}