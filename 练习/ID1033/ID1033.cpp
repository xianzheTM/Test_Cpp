//http://222.22.91.42/view/practice/display.aspx?qid=1033#flag

#include<iostream>
using namespace std;

int main()
{
	int i;
	char Str[5];
	cin >> Str[0];
	cin >> Str[1];
	cin >> Str[2];
	cin >> Str[3];
	Str[4]='\0';
	for(i=0;i<4;i++)
	{
		if (Str[i] <= 'z' && Str[i] >= 'a')
		{
			Str[i] = Str[i] - 32;
			cout << Str[i] << endl;
			continue;
		}
		if (Str[i] <= 'Z' && Str[i] >= 'A')
		{
			Str[i] = Str[i] + 32;
			cout << Str[i] << endl;
			continue;
		}
		if (Str[i] <= '9' && Str[i] >= '0')
		{
			cout << Str[i] << endl;
			continue;
		}
		else
			cout << "other" << endl;
		continue;
	}
	system("pause");
	return 0;
}
