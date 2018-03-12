//http://222.22.91.42/view/practice/display.aspx?qid=1011#flag ID1011 入门
#include<iostream>  
using namespace std;
int main()
{
	int a, b, c, d, e, f, C;
	cin >> a >> b;

	d = (a / 10) * 100;
	f = (a % 10);
	c = (b % 10) * 1000;
	e = (b / 10) * 10;
	C = d + f + c + e;
	cout << C;
	system("pause");
	return 0;




}