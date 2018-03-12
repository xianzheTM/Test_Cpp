//http://222.22.91.42/view/practice/display.aspx?qid=1322#flag ID1322
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	for (int m=1000;m<=9999;++m)
	{
		int temp = int(pow(double(m / 1000), 4)) + int(pow(double(m % 1000 / 100), 4)) + int(pow(double(m % 1000 % 100 / 10), 4)) + int(pow(double(m % 1000 % 100 % 10), 4));
		if (temp == m)
		{
			cout << m<<endl;
		}
	}
	system("pause");
	return 0;
}