//http://222.22.91.42/view/practice/display.aspx?qid=1325#flag ID1325
#include <iostream>
#include <cmath>
using namespace std;
int IsPrime(int number)
{
	bool flag = true;
	for (int i = 2; i <= sqrt(double(number)); ++i)
	{
		if (number%i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}
int main()
{
	int number;
	cin >> number;
	if (IsPrime(number))
	{
		cout << 'T';
	}
	else
	{
		cout << 'F';
	}
	system("pause");
	return 0;
}