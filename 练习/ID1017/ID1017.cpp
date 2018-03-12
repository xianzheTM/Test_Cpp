//http://222.22.91.42/view/practice/display.aspx?qid=1017#flag ID1017 入门
#include <iostream>
using namespace std;

int main()
{
	int n,i,j=0,s=0;
	cin >> n;
	for (i=1;i<=n;i++)
	{
		if (i%2==1)
		{
			j = i*(i + 1)*(i + 2);
			s = s + j;
		}
		j = 0;
	}
	cout << s;
	system("pause");
	return 0;
}