//http://222.22.91.42/view/practice/display.aspx?qid=1039#flag ID1039 一般
/*
#include <iostream>
using namespace std;
void reverse()
{
	char ch;
	cin.get(ch);
	if (ch != '\n')
	{
		reverse();//假设输入“abcde”，cin.get每次从缓冲区读取一个字符，先读到a,满足if条件，再次调用，读到b,以此类推，直到“\n”,回到上一次调用，执行cout.put(ch)，输出e,再回到上上次调用，，，
		cout.put(ch);
	}
}
int main()
{
	reverse();
	cout << endl;
	system("pause");
	return 0;
}
*/
#include<iostream>  
using namespace std;
void inputch(int n)
{
	char ch;
	if (n == 1)
	{
		cin >> ch;
		cout << ch;
	}
	else
	{
		cin >> ch;
		inputch(n - 1);
		cout << ch;
	}
}
int main()
{
	int n;
	cin >> n;
	inputch(n);
	return 0;
}