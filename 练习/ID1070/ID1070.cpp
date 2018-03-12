//http://222.22.91.42/view/practice/display.aspx?qid=1070#flag 简单 ID1070
#include <iostream>
using namespace std;
int main()
{
	unsigned int a, b;
	while (cin>>a>>b)
	{
		if (a%b==0)
		{
			cout << "YES"<<endl;
		}
		else
		{
			cout << "NO"<<endl;
		}
	}
	return 0;
}