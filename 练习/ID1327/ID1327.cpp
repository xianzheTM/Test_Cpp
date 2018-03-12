//http://222.22.91.42/view/practice/display.aspx?qid=1327#flag ID1327
#include <iostream>
using namespace std;
bool IsPerfectnumber(int number)
{
	int sum = 0;
	for (int i=1;i<number;++i)
	{
		if (number%i==0)
		{
			sum = sum + i;
		}
	}
	return sum==number;
}
int main()
{
	int number;
	cin >> number;
	if (IsPerfectnumber(number))
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