//http://222.22.91.42/view/practice/display.aspx?qid=1323#flag ID1323
#include <iostream>
using namespace std;
int monthAnddays[12][2] =
{
	1,31,
	2,28,
	3,31,
	4,30,
	5,31,
	6,30,
	7,31,
	8,31,
	9,30,
	10,31,
	11,30,
	12,31
};
int days(int year, int month, int day)
{
	bool leap_year = false;
	int sum = 0;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) //To determine whether it is a leap year
	{
		leap_year = true;
	}
	if (month == 1)
	{
		return day;
	}
	for (int i = 1; i < 12; ++i)
	{
		sum = sum + monthAnddays[i - 1][1];
		if (monthAnddays[i][0] == month)
		{
			break;
		}
	}
	if (month >= 2 && leap_year)
	{
		sum++;
	}
	return sum + day;
}
int main()
{
	int year, month, day;
	cin >> year >> month >> day;
	cout << days(year, month, day);
	system("pause");
	return 0;
}