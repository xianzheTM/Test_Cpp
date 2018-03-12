//http://222.22.91.42/view/practice/display.aspx?qid=1051#flag ID1051 一般
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n, m;
	int array[101];
	while (cin >> n >> m)
	{
		if (n == 0 && m == 0)
		{
			break;
		}
		else
		{
			for (int i = 0; i < n; ++i)
			{
				cin >> array[i];
			}
		}

		array[n] = m;
		sort(array, array + n + 1);
		for (int i = 0; i <= n; ++i)
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
	return 0;
}