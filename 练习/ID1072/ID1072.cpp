//http://222.22.91.42/view/practice/display.aspx?qid=1072#flag ID1072 一般
#include <iostream>
using namespace std;
void del(int a[], int n, int i)
{
	bool flag = false;
	for (int j = 0; j<n-1; ++j)
	{
		if (j==i||flag)
		{
			a[j] = a[j + 1];
			flag = true;
		}
	}
}
void PrintArr(int a[], int n)
{
	for (int i = 0; i<n-1; ++i)
	{
		if (i==n-2)
		{
			cout << a[i];
		} 
		else
		{
			cout << a[i] << " ";
		}
	}
}
int main()
{
	int n,i;
	int array[10];
	cin >> n;
	for (int i=0;i<n;++i)
	{
		cin >> array[i];
	}
	cin >> i;
	del(array, n, i);
	PrintArr(array, n);
	array[10];
	system("pause");
	return 0;
}