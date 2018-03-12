//http://222.22.91.42/view/practice/display.aspx?qid=1003#flag ID1003 入门级
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float x, y,s;
	int a;
	cin >> x >> y >> a;
	s = x + a % 3 * int(x + y) % 2 / 4;
	cout.setf(ios::fixed);
	cout << fixed << setprecision(2) << s;  //使输出为两位小数   
	system("pause");
	return 0;
}