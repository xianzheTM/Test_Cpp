//http://222.22.91.42/view/practice/display.aspx?qid=1004#flag ID1004 入门级
#include <iostream>
#include <iomanip>

#define Pi 3.1415927

using namespace std;
int main()
{
	float r,V;
	cin >> r;
	V = (4.0/ 3.0) * (Pi)*(r*r*r);
	cout.setf(ios::fixed);
	cout << fixed << setprecision(3) << V;   
	system("pause");
	return 0;
}