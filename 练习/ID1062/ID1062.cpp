//http://222.22.91.42/view/practice/display.aspx?qid=1062#flag 一般 ID1062
#include <iostream>
#include <iomanip>
using namespace std;
int fun(int score[], int below[], int m)
{
	int sum=0, average;
	for (int i=0;i<m;++i)
	{
		sum = sum + score[i];
	}
	average = sum / m;
	int count=-1;
	for (int i=0;i<m;++i)
	{
		if (score[i]<average)
		{
			count++;
			below[count] = score[i];
		}
	}
	return count + 1;
}
int main()
{
	int a[100], b[100], c, m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a[i];
	}
	c = fun(a, b, m);
	cout << c << ":";
	for (int i = 0; i < c; i++)
	{
		cout << b[i] << ",";
	}
	cout << endl;
	system("pause");
	return 0;
}