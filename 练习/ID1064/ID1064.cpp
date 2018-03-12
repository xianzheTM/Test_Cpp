//http://222.22.91.42/view/practice/display.aspx?qid=1064#flag ID1064 简单
#include <iostream>
using namespace std;
int main()
{
	char s[80];
	char key;
	cin.getline(s, 80, ' ');
	cin >> key;
	for (int i=0;i<strlen(s);++i)
	{
		if (s[i]!=key)
		{
			cout << s[i];
		}
	}
	system("pause");
	return 0;
}