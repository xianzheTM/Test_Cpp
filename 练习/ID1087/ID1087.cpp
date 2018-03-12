//http://222.22.91.42/view/practice/display.aspx?qid=1087#flag ID1087 
#include <iostream>
using namespace std;
int main()
{
	for (int i=1;;++i)
	{
		if (i%3==2&&i%5==3&&i%7==4)
		{
			cout << i;
			break;
		}
	}
	system("pause");
	return 0;
}