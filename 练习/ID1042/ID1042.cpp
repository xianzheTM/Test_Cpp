//http://222.22.91.42/view/practice/display.aspx?qid=1042#flag ID1042 
#include<iostream>    
using namespace std;
int m;
int sum;
int s;
void f(int n)
{
	s = n;
	if (sum >= m)
		return;
	else
	{
		sum += n * n;
		f(n + 1);
	}
}
int main()
{
	sum = 0;
	s = 0;
	cin >> m;
	f(1);
	cout << s - 2 << endl;
	return 0;
}