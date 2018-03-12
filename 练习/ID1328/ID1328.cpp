//http://222.22.91.42/view/practice/display.aspx?qid=1328#flag ID1328
#include <iostream>
#include <iomanip>
using namespace std;
bool judgment(int a)
{
	return (a % 13 == 0 && a % 100 / 10 == 9);
}
int main()
{
	for (int i=100;i<=999;++i)
	{
		if (judgment(i))
		{
			cout <<setw(4)<<setiosflags(ios::left)<<setfill(' ')<< i;
		}
	}
	system("pause");
	return 0;
}