//http://222.22.91.42/view/practice/display.aspx?qid=1068#flag 一般 ID1068
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
	for (int i = 0; i < n + 1; ++i)
	{
		cin >> stu[i].number;
		cin >> stu[i].name;
		cin >> stu[i].socres[0] >> stu[i].socres[1] >> stu[i].socres[2];
	}
	for (int j = 0; j < n + 1; ++j)
	{
		if (stu[j].number >= stu[j + 1].number)
		{
			stu[n+1] = stu[j + 1];
			stu[j + 1] = stu[j];
			stu[j] = stu[n+1];
		}
	}
	for (int i = 0; i < n+1; ++i)
	{
		cout << setprecision(0) << fixed << stu[i].number<<' ';
		cout << stu[i].name<<' ';
		cout << stu[i].socres[0] <<' '<< stu[i].socres[1] <<' '<< stu[i].socres[2]<<endl;
	}
	system("pause");
	return 0;
}