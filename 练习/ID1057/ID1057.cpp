//http://222.22.91.42/view/practice/display.aspx?qid=1057#flag ID1057 一般
#include<stdio.h> 
#include<math.h> 
int main()
{
	int a[50][50];
	double x, y, aver1[50], aver2[50], sum;
	int i, j, n, m, count, p;
	while (~scanf("%d%d", &n, &m))
	{
		count = 0;
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				scanf("%d", &a[i][j]);
		for (i = 0; i < n; i++)
		{
			sum = 0;
			for (j = 0; j < m; j++)
				sum += a[i][j];
			aver1[i] = sum / m;
		}
		for (j = 0; j < m; j++)
		{
			sum = 0;
			for (i = 0; i < n; i++)
				sum += a[i][j];
			aver2[j] = sum / n;
		}
		for (i = 0; i < n; i++)
		{
			p = 1;
			for (j = 0; j < m; j++)
				if (a[i][j] < aver2[j])
				{
					p = 0;
					break;
				}
			if (p)
				count++;
		}
		for (i = 0; i < n - 1; i++)
			printf("%.2lf ", aver1[i]);
		printf("%.2lf\n", aver1[i]);
		for (i = 0; i < m - 1; i++)
			printf("%.2lf ", aver2[i]);
		printf("%.2lf\n", aver2[i]);
		printf("%d\n\n", count);
	}
	return 0;
}
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double student_result[50][5];
	int n, m;
	while (cin >> n >> m)
	{
		//将所有成绩存入student_result数组
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cin >> student_result[i][j];
			}
		}
		double student_average, result_average;
		double student_sum = 0.0, result_sum = 0.0;
		double array_result_aver[5];//存储各科班级平均成绩
		//输出每个学生的平均成绩
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				student_sum = student_sum + student_result[i][j];
			}
			student_average = student_sum / m;

			cout.setf(ios::fixed);
			cout << setprecision(2) << student_average << " ";
			student_sum = 0.0, result_sum = 0.0;
		}
		cout << endl;
		//输出各科的平均成绩
		for (int i = 0; i< m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				result_sum = result_sum + student_result[j][i];
			}
			result_average = result_sum / m;
			array_result_aver[i] = result_average;
			cout.setf(ios::fixed);
			cout << setprecision(2) << result_average << " ";
			student_sum = 0.0, result_sum = 0.0;
		}cout << endl;
		//统计超过平均成绩的人数
		int flag = 0;
		int results = 0;//超过平均成绩的人数
		for (int i=0;i<n;++i)
		{
			for (int j=0;j<m;++j)
			{
				if (student_result[i][j]>=array_result_aver[j])
				{
					flag++;
				}
			}
			if (flag==m)
			{
				results++;
			}
			flag = 0;
		}
		cout << results;
		cout << endl;
		cout << endl;
	}
	system("pause");
	return 0;
}
*/