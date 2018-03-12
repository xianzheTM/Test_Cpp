//http://222.22.91.42/view/practice/display.aspx?qid=1073#flag ID1073 一般
#include <iostream>
using namespace std;
int main()
{
	int n;
	int array[30][30];
	array[0][0] = 1;
	array[1][0] = 1, array[1][1] = 1;
	array[2][0] = 1, array[2][1] = 2, array[2][2] = 1;
	cin >> n;
	for (int i=0;i<n;++i)
	{
		for (int j=0;j<=i;++j)
		{
			if (j==0||j==i)
			{
				array[i][j] = 1;
			}
			else
			{
				array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
			}
		}
	}
	for (int i=0;i<n;++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			if (i==0)
			{
				cout << 1<<endl;
			}
			else
			{
				if (j==i)
				{
					cout << array[i][j]<<endl;
				}
				else
				{
					cout << array[i][j]<<" ";
				}
			}
		}
	}
	system("pause");
	return 0;
}