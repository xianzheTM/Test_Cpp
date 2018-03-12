//http://222.22.91.42/view/practice/display.aspx?qid=1041#flag ID1041 真的煞笔，这种题，有意思吗？？？这个系列的我都不做了。
#include<iostream>  
using namespace std;
int ave;
int emin;
int ff(int n)
{
	int max, x, sum = 0;
	cin >> n >> x;
	max = x; emin = x; sum = x;
	for (int i = 1; i < n; i++)
	{
		cin >> x;
		if (x > max)
			max = x;
		if (x < emin)
			emin = x;
		sum = sum + x;
	}
	ave = sum / n;
	return max;
}
int main()
{
	int a, n;
	a = ff(n);
	cout << a << " " << emin << " " << ave << endl;
	return 0;
}