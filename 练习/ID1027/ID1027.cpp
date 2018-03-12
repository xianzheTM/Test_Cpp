//http://222.22.91.42/view/practice/display.aspx?qid=1027#flag ID1027 入门
#include <iostream>
using namespace std;
int main()
{
	int n, m,l,i,s=0;
	cin >> n>>m>>l;
	for (i=1;i<=100;i++)
	{
		if (i%3==n)
		{
			if (i%4==m)
			{
				if (i % 7 == l)
				{
					cout << i << ";";
					s = s + 1;
				}
			}
		}
	}
	if (s==0)
	{
		cout << "no solution";
	}
	system("pause");
	return 0;

}