//http://222.22.91.42/view/practice/display.aspx?qid=1329#flag ID1329
#include <iostream>
using namespace std;
bool judement(int a)
{
	return a / 100 + a % 100 / 10 + a % 100 % 10 == 17;
}
int main()
{
	int sum = 0;
	for (int i=100;i<=999;++i)
	{
		if (judement(i))
		{
			sum++;
		}
	}
	cout << sum;
	system("pause");
	return 0;
}