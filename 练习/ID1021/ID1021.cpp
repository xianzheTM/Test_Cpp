//http://222.22.91.42/view/practice/display.aspx?qid=1021#flag ID1021 入门
#include <iostream>
using namespace std;
int main()
{
	int m, n,max,min,r,s;
	cin >> m >> n;
	if (n<m)
	{
		max = m, min = n;
	}
	else
	{
		max = n, min = m;
	}
	do 
	{
		r = max%min;
		max = min;
		min = r;
	} while (r!=0);
	s= (m*n) / max;
	cout << s;
	system("pause");
	return 0;

}