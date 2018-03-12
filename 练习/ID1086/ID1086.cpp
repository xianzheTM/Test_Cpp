//http://222.22.91.42/view/practice/display.aspx?qid=1086#flag ID1086 
#include<iostream>  
#include<string.h>  
using namespace std;
int main()
{
	int k;
	char a[100], b[100];
	cin >> k;
	while (k--)
	{
		cin >> a;
		for (int i = 0; i < strlen(a); i++)
		{
			b[i] = a[strlen(a) - i - 1];
		}
		b[strlen(a)] = '\0';
		if (strcmp(a, b) == 0)
		{
			cout << 'Y' << endl;
		}
		else
		{
			cout << 'N' << endl;
		}
	}
	return 0;
}