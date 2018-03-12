//http://222.22.91.42/view/practice/display.aspx?qid=1036#flag 一般 ID1036
#include <iostream>
using namespace std;
int main()
{
	int array[30], subscrpt,i;
	cin >> subscrpt;
	array[0] = 7; array[1] = 11;
	if (subscrpt==0||subscrpt==1)
	{
		cout << "no"<<endl;
	} 
	else
	{
		for (i=2;i<=subscrpt;i++)
		{
			array[i] = array[i - 1] + array[i - 2];
		}
		if (array[subscrpt]%3==0)
		{
			cout << "yes"<<endl;
		}
		else
		{
			cout << "no"<<endl;
		}
	}
	system("pause");
	return 0;
}