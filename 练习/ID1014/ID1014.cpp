//http://222.22.91.42/view/practice/display.aspx?qid=1014#flag ID1014 »Î√≈
#include <iostream>
using namespace std;
int main()
{
	int n=1, m,sum=0;
	cin >> m;
	while (sum <= m)
	{
		sum = sum + n;
		n++;
	}
	n = n - 2;
	cout << n;
	system("pause");
	return 0;

}