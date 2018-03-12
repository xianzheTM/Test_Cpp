//http://222.22.91.42/view/practice/display.aspx?qid=1284#flag ID1284
#include<iostream>  
#include<cmath>  
using namespace std;
int daff(int m, int n)
{
	int sum = 0;
	for (int i = m; m <= n; ++m)
	{
		int temp = int(pow(double(m / 100), 3)) + int(pow(double(m % 100 / 10), 3)) + int(pow(double(m % 100 % 10), 3));
		if (temp == m)
		{
			sum++;
		}
	}
	return sum;
}
int rose(int m, int n)
{
	int sum = 0;
	for (int i = m; m <= n; ++m)
	{
		int temp = int(pow(double(m / 1000), 4)) + int(pow(double(m % 1000 / 100), 4)) + int(pow(double(m % 1000 % 100 / 10), 4)) + int(pow(double(m % 1000 % 100 % 10), 4));
		if (temp == m)
		{
			sum++;
		}
	}
	return sum;
}
int main()
{
	int m, n;
	int select;
	int number_zimi = 0;
	cin >> m >> n;
	cin >> select;
	switch (select)
	{
	case 3: number_zimi = daff(m, n); break;  
	case 4: number_zimi = rose(m, n); break;  
	default:;
	}
	cout << number_zimi << endl;
	system("pause");
	return 0;
}