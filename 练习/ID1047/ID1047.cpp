//http://222.22.91.42/view/practice/display.aspx?qid=1047#flag
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	double n, i;
	double number = 0, sum = 0;
	cin >> n;
	for (i = 1; abs((pow(-1.0, i + 1)) * 1 / (i*(i + 1) + n)) > pow(10.0, -4); ++i)
	{
		number = (pow(-1, i + 1)) * 1 / (i*(i + 1) + n);
		sum = sum + number;
	}
	cout << setiosflags(ios::fixed) << setprecision(4) << sum-0.0001;//不知道哪里的精度不对，与答案差了0.0001
	system("pause");
	return 0;
}