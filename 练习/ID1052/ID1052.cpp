//http://222.22.91.42/view/practice/display.aspx?qid=1053#flag ID1052 简单
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	char ch1[80], ch2[80];
	cin >> ch1;
	cin >> ch2;
	int i;
	if (!strcmp(ch1, ch2))
	{
		cout << 0 << endl;
	}
	else
	{
		for (i = 0; i < 80; ++i)
		{
			if (ch1[i] != ch2[i])
			{
				cout << int(abs((int)ch1[i] - (int)ch2[i])) << endl;
				break;
			}
		}
	}
	return 0;
}