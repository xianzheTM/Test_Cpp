//http://222.22.91.42/view/practice/display.aspx?qid=1077#flag ID1077 一般
#include <iostream>
using namespace std;
int main()
{
	int n, sum_oddnumber = 0, sum_evennumber = 0, aver_odd, aver_even;
	int array[200];
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> array[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (i % 2 == 0)
		{
			sum_evennumber = sum_evennumber + array[i];
		}
		else
		{
			sum_oddnumber = sum_oddnumber + array[i];
		}
	}
	if (n % 2 == 0)
	{
		aver_even = sum_evennumber / (n / 2);
		aver_odd = sum_oddnumber / (n / 2);
		cout << aver_even << " " << aver_odd;
	}
	else
	{
		aver_even = sum_evennumber / ((n + 1) / 2);
		aver_odd = sum_oddnumber / ((n - 1) / 2);
		cout << aver_even << " " << aver_odd;
	}
	system("pause");
	return 0;
}