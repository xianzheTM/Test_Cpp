//http://222.22.91.42/view/practice/display.aspx?qid=1278#flag ID1278
#include <iostream>    
#include <iomanip>    
#include <cmath>    
using namespace std;
const double pi = 3.1415;
int tri_judge(double a, double b, double c)
{
	if (a + b > c && a + c > b && b + c > a)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
double triangle_area(double a, double b, double c)
{
	double p, area;
	p = (a + b + c) / 2;
	area = sqrt(p*(p - a)*(p - b)*(p - c));
	return area;
}
double circle_area(double r)
{
	double area;
	area = pi * r*r;
	return area;
}
double quadrangle_area(double d, double h)
{
	double area;
	area = d * h;
	return area;
}
int main()
{
	double a, b, c;
	while (cin >> a >> b >> c)
	{
		if (tri_judge(a, b, c))
			cout << "triangle's area is: " << fixed << setprecision(2) << triangle_area(a, b, c) << endl;
		else
		{
			cout << "circle's area is: " << fixed << setprecision(2) << circle_area(a) << endl;
			cout << "quadrangle's area is: " << fixed << setprecision(2) << quadrangle_area(b, c) << endl;
		}
		cout << endl;
	}
	return 0;
}