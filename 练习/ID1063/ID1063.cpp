//http://222.22.91.42/view/practice/display.aspx?qid=1063#flag ID1063 一般
#include <iostream>
#include <iomanip>
using namespace std;
int search(int a[], int m)
{
	bool flag = false;
	for (int i=0;i<10;++i)
	{
		if (a[i]==m)
		{
			flag = true;
			return i;
		}
	}
	if (!flag)
	{
		return -1;
	}
}
int main()
{
	int a[10], m, i, no;
	for (i = 0; i < 10; i++)
		cin >> a[i];
	cin >> m;
	no = search(a, m);
	if (no != -1)
		cout << "found:" << no + 1 << endl;
	else
		cout << "not found!" << endl;
	system("pause");
	return 0;
}