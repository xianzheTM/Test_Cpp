//http://222.22.91.42/view/practice/display.aspx?qid=1028#flag ID1028 一般 
#include <iostream>
using namespace std;

int main()
{
	int rabbit_n[1000], month, i;
	cin >> month;
	rabbit_n[0] = 1, rabbit_n[1] = 1;
	if (month == 1 || month == 2)
	{
		cout << rabbit_n[month];
	}

	else
	{
		for (i = 2; i < month; i++)
		{
			rabbit_n[i] = rabbit_n[i - 1] + rabbit_n[i - 2];
		}
		cout << rabbit_n[month - 1];
	}
	system("pause");
	return 0;

}