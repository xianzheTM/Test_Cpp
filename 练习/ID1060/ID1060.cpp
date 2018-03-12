//http://222.22.91.42/view/practice/display.aspx?qid=1060#flag ID1060 一般
#include <iostream>
using namespace std;
void encryption(char a[])
{
	for (int i = 0; i < strlen(a); ++i)
	{
		a[i] = a[i] + 2;
		if (a[i] == 91 || a[i] == 92)
		{
			a[i] = a[i] - 26;
		}
		if (a[i] == 123 || a[i] == 124)
		{
			a[i] = a[i] - 26;
		}
	}
}
void decryption(char a[])
{
	for (int i = 0; i < strlen(a); ++i)
	{
		a[i] = a[i] - 2;
		if (a[i] == 63 || a[i] == 64)
		{
			a[i] = a[i] + 26;
		}
		if (a[i] == 95 || a[i] == 96)
		{
			a[i] = a[i] + 26;
		}
	}
}
int main()
{
	char original[80];
	cin.getline(original, 80, '\n');
	encryption(original);
	cout << original<<endl;
	decryption(original);
	cout << original;
	system("pause");
	return 0;
}