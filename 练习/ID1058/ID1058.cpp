//http://222.22.91.42/view/practice/display.aspx?qid=1058#flag 一般 ID1058
#include <iostream>
using namespace std;
int abs(int x)
{
	if (x<0)
	{
		return -x;
	} 
	else
	{
		return x;
	}
}
int main()
{
	int n;
	while (cin>>n)
	{
		if (n==0)
		{
			break;
		}
		int array[100];
		for (int i=1;i<=n;++i)
		{
			cin >> array[i];
		}
		int min_array;
		for (int i = 1; i < n; ++i)
		{
			for (int j=1;j<=n-i;++j)
			{
				if (abs(array[j]) < abs(array[j + 1]))
				{
					min_array = array[j];
					array[j] = array[j + 1];
					array[j + 1] = min_array;
				}
			}
		}
		for (int i=1;i<=n;++i)
		{
			if (i==n)
			{
				cout << array[i] << endl;
			}
			else
			{
				cout << array[i] << " ";
			}
		}
	}
}