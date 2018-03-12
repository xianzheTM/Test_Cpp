//http://222.22.91.42/view/practice/display.aspx?qid=1136#flag ID1136
//Same as 1137 and 1139
#include<iostream>  
using namespace std;
int main()
{
	int score[10];
	int sum_90 = 0, sum_80 = 0, sum_70 = 0, sum_60 = 0, sum_50 = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> score[i];
	}
	for (int j = 0; j < 10; j++)
	{
		if (score[j] >= 90)
		{
			sum_90++;
		}
		else if (score[j] >= 80 && score[j] <= 89)
		{
			sum_80++;
		}
		else if (score[j] >= 70 && score[j] <= 79)
		{
			sum_70++;
		}
		else if (score[j] >= 60 && score[j] <= 69)
		{
			sum_60++;
		}
		else
		{
			sum_50++;
		}
	}
	cout << sum_90 << " " << sum_80 << " " << sum_70 << " " << sum_60 << " " << sum_50;
	system("pause");
	return 0;
}
