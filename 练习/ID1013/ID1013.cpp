
//http://222.22.91.42/view/practice/display.aspx?qid=1013#flag ID1013 入门
#include <iostream>
using namespace std;
int main()
{
	int n, i, s=0;
	while (cin >> n) //循环输入n
	{
		for (i = 100; i <= n; i++)
		{
			if ((i % 2 == 0) && (i % 3 == 0) && (i % 7 == 0))
			{
				s = s + 1;
			}
			i++;
		}
		cout << s<<endl;
		s = 0;   //将计数器清零
	}
	
	
	return 0;

}


