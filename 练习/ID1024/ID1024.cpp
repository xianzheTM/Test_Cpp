//http://222.22.91.42/view/practice/display.aspx?qid=1024#flag ID1024 入门
#include <iostream>
using namespace std;
int main()
{
	int n, i = 3;
	double d = 0.0, a = 1, b = 2, c = 3;
	cin >> n;
	while (d <= n)
	{
		d = (a + b + c) / 2;
		a = b, b = c, c = d;
		i += 1;
	}
	cout << i << endl;
	system("pause");
	return 0;
}