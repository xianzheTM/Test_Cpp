//http://222.22.91.42/view/practice/display.aspx?qid=1034#flag 一般 ID1034
//感觉这道题有问题，第十四行应该是mileage = mileage + height*2;
#include <iostream>

using namespace std;
int main()
{
	int mileage, height;
	cin >> height;
	mileage = height;//first
	for (int i=2;i<=10;i++)
	{
		height = height / 2;
		mileage = mileage + height;
	}
	cout << mileage;
	system("pause");
	return 0;
}