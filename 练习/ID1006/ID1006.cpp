#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float a, b, c, x1, x2;
	cin >> a >> b >> c;
	if ((a != 0) && (b*b - 4 * a*c) > 0)
	{
		x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
		x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
		cout.setf(ios::fixed);
		cout << fixed << setprecision(2) << x1<<" "<<x2;
	}
	system("pause");
	return 0;
}