//http://222.22.91.42/view/practice/display.aspx?qid=1053#flag ID1053 一般
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int array[100];
	int min;
	int n;
	while (cin >> n)
	{
		if (n != 0)
			for (int i = 0; i < n; ++i)
			{
				cin >> array[i];
			}
		min = *min_element(array, array + n);
		int i;
		for (i = 0; i <= n; ++i)
		{
			if (array[i] == min)
			{
				break;
			}
		}
		array[i] = array[0];
		array[0] = min;
		for (int i = 0; i < n; ++i)
		{
			if (i == 0)
			{
				cout << array[0];
			}
			else
			{
				cout << " " << array[i];
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
