//http://222.22.91.42/view/practice/display.aspx?qid=1046#flag ID1046 一般
#include <iostream>
using namespace std;
int main()
{
	int input;
	cin >> input;
	for (int i=153;i<=input;++i)
	{
		if ((i/100)*(i / 100) *(i / 100) +(i%100/10)*(i % 100 / 10) *(i % 100 / 10) +(i%10)*(i % 10) *(i % 10)==i)
		{
			cout << i << " ";
		}
	}
	system("pause");
	return 0;
}