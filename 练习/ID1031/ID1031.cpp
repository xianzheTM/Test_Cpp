//http://222.22.91.42/view/practice/display.aspx?qid=1031#flag 一般 ID1031

#include<iostream>  
using namespace std;
int main()
{
	int n, a = 0, b = 0;
	for (int i = 1;; i++)
	{
		cin >> n;//注意这里，假定输入了-1 1 2 3 0，按下回车，这几个数进入缓冲区，再由cin来读取，参见此篇https://www.cnblogs.com/A-Song/archive/2012/01/29/2331204.html
		if (n == 0)
			break;
		if (n > 0)  a = a + 1;
		if (n < 0)  b = b + 1;
	}
	cout << a << " " << b << endl;
	system("pause");
	return 0;
}

/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int  sum_negative = 0, sum_positive = 0, subscript;
	string i;
	getline(cin, i, '0');
	int lengTH = i.size();
	int a[20];
	string b;
	b = i.split(" ");
	for (subscript = 0; subscript < i.size(); subscript = subscript + 2)
	{
		cout << i[0] << endl;
		if (i[subscript] < 0)
		{
			sum_negative++;
		}
		if (i[subscript] > 0)
		{
			sum_positive++;
		}
	}
	cout << sum_positive << " " << sum_negative;
	system("pause");
	return 0;
}
*/