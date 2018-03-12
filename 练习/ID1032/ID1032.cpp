//http://222.22.91.42/view/practice/display.aspx?qid=1032#flag ID1032 一般

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i, number,hundred,ten,bit,sum=0;
	cin >> number;
	for (i=101;i<=number;i++)
	{
		bit = ((i % 100) % 10), ten = (i % 100) / 10, hundred = i / 100;
		if (bit+ten+hundred==5)
		{
			cout << setw(4) << setiosflags(ios::right) << setfill(' ') << i ;
			sum++;
		}
	}
	cout<<setw(4)<<setiosflags(ios::left)<<setfill(' ') << sum;
	system("pause");
	return 0;
}
