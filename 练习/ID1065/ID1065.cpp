//http://222.22.91.42/view/practice/display.aspx?qid=1065#flag ID1065 一般
//开始以为这道题会很复杂，看了别人的才发现真简单，大概思路就是模拟辗转相除法，保留每次的余数，用数组做的思路清晰，我一向讨厌递归做法，脑子笨。。。
//这道题是HDU2031，大佬们都觉得是水题，只有我上来就被吓到，还是naive啊，还要多多学习大佬的人生经验。
#include <iostream>  
using namespace std;
char arr[1001];
int n, r, len;

void tranform(void)
{
	int i = 0, temp;

	// 如果n是负的，转正  
	if (n > 0)  temp = n;
	else    temp = -n;

	while (temp)
	{
		arr[i] = temp%r + '0';

		// 判断是数字还是字符  
		if (arr[i] > '9')   arr[i] = arr[i] - '9' + 64;

		temp /= r;
		++i;
	}

	// 长度赋给全局变量  
	len = i;
}

int main()
{
	int i;
	while (cin >> n >> r)
	{
		len = 0;
		// 进行转换  
		tranform();

		// 判断是否是负的  
		if (n < 0)  cout << "-";

		// 逆着输出  
		for (i = len - 1; i >= 0; --i)
			cout << arr[i];
		cout << endl;
	}
	return 0;
}
/*
#include<iostream>  
#include<stdio.h>  
using namespace std;
int r;

void s(int n)
{
	char q;
	if (n == 0)
		return;
	s(n / r);
	q = (n%r < 10) ? (n%r + '0') : (n%r - 10 + 'A');
	cout << q;
}

int main()
{
	int n;
	while (cin >> n >> r)
	{
		if (n > 0) s(n);
		else if (n == 0) cout << 0;
		else
		{
			putchar('-');
			s(-n);
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
*/