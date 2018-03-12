//http://222.22.91.42/view/practice/display.aspx?qid=1048#flag ID1048 一般
#include <iostream>
using namespace std;
int main()
{
	int alpha[16], beta[16];
	int n,i;
	cin >> n;
	alpha[0] = 1, beta[0] = 0;
	for (i=1;i<=n;++i)
	{
		alpha[i] = beta[i - 1];
		beta[i] = 3 * alpha[i - 1] + 2 * beta[i - 1];
	}
	cout << alpha[n] << " " << beta[n];
	system("pause");
	return 0;
}
