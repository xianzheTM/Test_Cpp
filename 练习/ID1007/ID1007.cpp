//http://222.22.91.42/view/practice/display.aspx?qid=1007#flag ID1007 入门
#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cin >> x;
	y = ((100 - (6 - x)) % 7) - 1;
	cout << y;
	system("pause");
	return 0;
}