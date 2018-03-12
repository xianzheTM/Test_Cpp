//http://222.22.91.42/view/practice/display.aspx?qid=1326#flag ID1326
#include <iostream>
#include <iomanip>
using namespace std;
double FtoC(double F)
{
	double C;
	C = (F - 32) * 5 / 9;
	return C;
}
int main()
{
	double F;
	cin >> F;
	cout << setiosflags(ios::fixed) << setprecision(2) << FtoC(F);
	system("pause");
	return 0;
}