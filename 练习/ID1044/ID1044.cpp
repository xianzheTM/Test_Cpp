//http://222.22.91.42/view/practice/display.aspx?qid=1044#flag ID1044 一般
#include <iostream>
using namespace std;
int main()
{
	int number_row;
	cin >> number_row;
	int i, j, k;
	for (i=1;i<=number_row;i++)
	{
		for (j=0;j<i;j++)
		{
			cout << i - 1;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}