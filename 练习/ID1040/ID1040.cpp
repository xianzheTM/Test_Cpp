//http://222.22.91.42/view/practice/display.aspx?qid=1040#flag ID1040 
#include<iostream>    
using namespace std;
bool judge(int n)
{
	int sum = 0, i;
	for (i = 1; i < n; i++)
	{
		if (n%i == 0)
			sum = sum + i;
	}
	if (n == sum)
		return true;
	else
		return false;
}
int main()
{
	int x, i;
	while (cin >> x)
	{
		int t = 0;
		for (i = 2; i <= x; i++)
		{
			if (judge(i))
				t++;
		}
		cout << t << endl;
	}
	return 0;
}