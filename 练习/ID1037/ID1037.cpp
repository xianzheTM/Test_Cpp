//http://222.22.91.42/view/practice/display.aspx?qid=1037#flag 较难 ID1037
 #include <iostream>

using namespace std;
#include<iostream>  
using namespace std;
int main()
{
	int n, m, i, a[40] = { 1,1 };
	for (i = 2; i <= 40; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	cin >> n;
	while (n--)
	{
		cin >> m;
		cout << a[m - 1] << endl;
	}
	return 0;
}
//未知原因，就是不通过
/*
int main()
{
	int n_test;//测试次数
	int i, j, sum = 0;
	int array[41];//该数组用来存取走到该步的走法
	array[1] = 0;
	array[2] = 1;
	array[3] = 2;
	cin >> n_test;
	int step[100];//级数
	for (j = 4; j < 41; ++j)
	{
		array[j] = array[j - 1] + array[j - 2];
	}
	for (i = 0; i < n_test; ++i)//输入多个测试数据，存在数组中
	{
		cin >> step[i];
	}
	for (i = 0; i < n_test; ++i)
	{
		cout << array[step[i]]<<endl;
	}

	system("pause");
	return 0;
}
*/

