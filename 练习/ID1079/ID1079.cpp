//http://222.22.91.42/view/practice/display.aspx?qid=1079#flag ID1079 简单
#include <iostream>
#include <iomanip>
using namespace std;
double computesum(int n)
{
	double sum=0;
	for (int i=1;i<=n;++i)
	{
		double result = (2.0*i - 1) / (2.0*i);
		sum = result + sum;
	}
	return sum;
}
int main()
{
	int n;
	cin >> n;
	cout << setiosflags(ios::fixed) << setprecision(4) << computesum(n);
	system("pause");
	return 0;
}