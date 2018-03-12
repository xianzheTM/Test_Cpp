//http://222.22.91.42/view/practice/display.aspx?qid=1045#flag ID1045 一般
#include <iostream>
using namespace std;
int main()
{
	int n, sum=0;
	cin >> n;
	for (int j=2;j<n;j++)
	{
		if (n%j==0)
		{
			sum = sum + j;
		}
	}
	cout << sum;
	system("pause");
	return 0;
}