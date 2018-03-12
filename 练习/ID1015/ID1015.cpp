//http://222.22.91.42/view/practice/display.aspx?qid=1015#flag ID1015 入门
#include <iostream>
using namespace std;
 
int main()
{
	int a, n, i, s = 0;
	cin >> a >> n;
	int t = a;
	for (i=1;i<=n;i++)
	{
		s = s + t;
		t = t * 10 + a;
	}
	cout << s;
	system("pause");
	return 0;


}