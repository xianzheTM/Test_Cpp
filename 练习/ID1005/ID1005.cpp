//http://222.22.91.42/view/practice/display.aspx?qid=1005#flag ID1005 入门级
#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;
int main()
{
	float i;
	cin >> i;
	cout.setf(ios::fixed);
	cout << fixed << setprecision(2) << abs(i);  //使输出为两位小数   
	system("pause");
	return 0;
}