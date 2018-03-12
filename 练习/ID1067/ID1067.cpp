//http://222.22.91.42/view/practice/display.aspx?qid=1067#flag 一般 ID1067
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	struct student
	{
		double number;
		char name[20];
		int socres[3];
	};
	student stu[100];
	for (int i = 0; i < n; ++i)
	{
		cin >> stu[i].number;
		cin >> stu[i].name;
		cin >> stu[i].socres[0] >> stu[i].socres[1] >> stu[i].socres[2];
	}
	double find;
	bool flag = false;
	cin >> find;
	for (int i = 0; i < n; ++i)
	{
		if (stu[i].number==find)
		{
			cout << setprecision(0) << fixed<< stu[i].number << ' ' << stu[i].name << ' ' << stu[i].socres[0]<<' ' << stu[i].socres[1]<<' ' << stu[i].socres[2];
			flag = true;
		}
	}
	if (flag==false)
	{
		cout << "Not Found";
	}
	system("pause");
	return 0;
}