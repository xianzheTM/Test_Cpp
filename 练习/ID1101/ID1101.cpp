//http://222.22.91.42/view/practice/display.aspx?qid=1101#flag ID1101 
//Same as 1032，emmm
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n, sum = 0;
	cin >> n;
	if (n >= 100)
	{
		for (int i = 100; i <= n; ++i)
		{
			if (i / 100 + i % 100 / 10 + i % 100 % 10 == 5)
			{
				cout << setw(4) << setiosflags(ios::right) << setfill(' ') << i;
				sum++;
			}
		}
		cout << setw(4) << setiosflags(ios::right) << setfill(' ') << sum;
	}
	else
	{
		for (n;n<=100;++n)
		{
			if (n % 100 / 10 + n % 100 % 10 == 5)
			{
				cout << setw(4) << setiosflags(ios::right) << setfill(' ') << n;
				sum++;
			}
		}
		cout << setw(4) << setiosflags(ios::right) << setfill(' ') << sum;
	}
	system("pause");
	return 0;
}
