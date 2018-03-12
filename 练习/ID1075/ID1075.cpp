http://222.22.91.42/view/practice/display.aspx?qid=1075#flag ID1075
#include <iostream>
using namespace std;
int str_len(char *pa,int a)
{
	int count = 0;
	for (int i=0;i<a;++i)
	{
		if (*(pa+i)!=' ')
		{
			count++;
		}
	}
	return count;
}
int main()
{
	char Str[100];
	cin.getline(Str,100,'\n');
	cout<<str_len(Str,strlen(Str));
	system("pause");
	return 0;
}