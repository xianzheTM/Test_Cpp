//http://222.22.91.42/view/practice/display.aspx?qid=1029#flag ID1029 一般
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float molecular[100], denominator[100], result[100], sum = 0;   //molecular分子，denominator分母
	int i;
	int n;
	molecular[0] = 2, molecular[1] = 3;
	denominator[0] = 3, denominator[1] = 5;
	cin >> n;
	if (n == 1)
	{
		result[0] = molecular[0] / denominator[0];
		cout << setiosflags(ios::fixed) << setprecision(2) << result[0];
	}
	else if (n == 2)
	{
		result[0] = molecular[0] / denominator[0];
		result[1] = molecular[1] / denominator[1];
		cout << setiosflags(ios::fixed) << setprecision(2) << result[1] + result[0];
	}
	else
	{
		result[0] = molecular[0] / denominator[0];
		result[1] = molecular[1] / denominator[1];
		sum = result[1] + result[0];
		for (i = 2; i < n; i++)
		{
			molecular[i] = molecular[i - 1] + molecular[i - 2];
			denominator[i] = denominator[i - 1] + 2;
			result[i] = molecular[i] / denominator[i];
			sum = sum + result[i];
		}
		cout << setiosflags(ios::fixed) << setprecision(2) << sum;
	}
	system("pause");
	return 0;

}