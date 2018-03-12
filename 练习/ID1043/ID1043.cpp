//http://222.22.91.42/view/practice/display.aspx?qid=1043#flag ID1043 
#include<iostream>    
using namespace std;
int age(int n)
{
	int c;
	if (n == 1)
		c = 10;
	else
		c = n + age(n - 1);
	return c;
}
int main()
{
	int n;
	while (cin >> n)
		cout << age(n) << endl;
	return 0;
}