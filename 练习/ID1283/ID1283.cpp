//http://222.22.91.42/view/practice/display.aspx?qid=1283#flag ID1278 
#include<iostream>  
#include<algorithm>  
using namespace std;
struct student
{
	char number[6];
	char name[10];
	int score1;
	int score2;
	int score3;
};
student stu[5];
int main()
{
	int sum[5];
	for (int i = 0; i < 5; ++i)
	{
		cin >> stu[i].number;
		cin >> stu[i].name;
		cin >> stu[i].score1 >> stu[i].score2 >> stu[i].score3;
		sum[i] = stu[i].score1 + stu[i].score2 + stu[i].score3;
	}
	for (int i = 0; i < 5; ++i)
	{
		if (*max_element(sum, sum + 5) == sum[i])
		{
			cout << stu[i].number << ',' << stu[i].name << ',' << stu[i].score1 << ',' << stu[i].score2 << ',' << stu[i].score3 << ',' << sum[i];
			break;
		}
	}
	system("pause");
	return 0;
}