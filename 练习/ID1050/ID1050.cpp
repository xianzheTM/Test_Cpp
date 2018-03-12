//http://222.22.91.42/view/practice/display.aspx?qid=1050#flag ID1050
#include<iostream>    
using namespace std;
double k1, k2, k3, k4;
double b1, c1;

double func(int n);
double funb(int n);

int main()
{
	int n;
	double B, C;
	cin >> n;
	cin >> k1 >> k2 >> k3 >> k4;
	cin >> b1 >> c1;
	B = funb(n);
	C = func(n);
	cout << "B=" << B << " " << "C=" << C << endl;
	return 0;
}

double func(int n)
{
	double c;
	if (n == 1)
	{
		c = c1;
		cout << "c=" << c1 << endl;
	}
	else
	{
		c = func(n - 1)*(1 + k1 - k2 * funb(n - 1));
	}
	return c;
}

double funb(int n)
{
	double b;
	if (n == 1)
	{
		b = b1;
	}
	else
	{
		b = funb(n - 1)*(1 - k3 + k4 * func(n - 1));
	}
	return b;
}