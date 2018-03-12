//http://222.22.91.42/view/practice/display.aspx?qid=1012#flag ID1012 »Î√≈
#include<iostream>
using namespace std;
int main()
{
	int i=1,n,s,sum=0;
	cin >> n;
	while (i <= n)
	{
		s = i*(i + 1);
		sum = sum + s;
		i++;
	}
	cout << sum;
	system("pause");
	return 0;
}