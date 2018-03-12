//http://222.22.91.42/view/practice/display.aspx?qid=1059#flag ID1059 一般
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	double sum = 0;
	int number[100];
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> number[i];
	}
	sort(number, number + n - 1);
	for (int i = 0; i < n; ++i)
	{
		sum = sum + number[i];
	}
	double average = sum / n;
	for (int i = 0; i < n; ++i)
	{
		if (number[i] < average)
		{
			cout << number[i] << " ";
		}
	}
	cout << endl;
	for (int i = 0; i < n; ++i)
	{
		if (number[i] > average)
		{
			cout << number[i] << " ";
		}
	}
	system("pause");
	return 0;
}