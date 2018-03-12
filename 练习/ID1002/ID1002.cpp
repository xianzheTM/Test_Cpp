//http://222.22.91.42/view/practice/display.aspx?qid=1002#flag ID1002 入门级
#include <iostream>  
#include <math.h>  
#include <iomanip>  
using namespace std;
int main()
{
	float x1, y1, x2, y2, s;

	cin >> x1 >> y1 >> x2 >> y2;
	s = sqrtf((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	cout.setf(ios::fixed);
	cout << fixed << setprecision(2) << s;  //使输出为两位小数   
	system("pause");
	return 0;

}