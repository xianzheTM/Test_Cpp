//http://222.22.91.42/view/practice/display.aspx?qid=1324#flag ID1324
#include<iostream>
#include <iomanip>
using namespace std;
const double pi = 3.1416;
void s()
{
	double r;
	cin >> r;
	cout <<setiosflags(ios::fixed)<<setprecision(4)<< pi * r*r<<endl;
}
int main()
{
	s();
	system("pause");
	return 0;
}