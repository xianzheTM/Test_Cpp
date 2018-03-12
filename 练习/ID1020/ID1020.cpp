//http://222.22.91.42/view/practice/display.aspx?qid=1020#flag ID1020 入门
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int i, n, s = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		double x = sqrt(double(i + 100));
		double y = sqrt(double(i + 268));
		if ((int)x*x == (i + 100) && (int)y*y == (i + 268))
		{
			s = s + 1;
		}
		x = y, y = 0;
	}
	cout << s;
	system("pause");
	return 0;


}