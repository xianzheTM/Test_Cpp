//http://acm.hdu.edu.cn/showproblem.php?pid=1001
#include <iostream>
using namespace std;
int main()
{
	int i, n;
	while (cin>>n)
	{
		int sum = 0;
		for (i=1;i<=n;i++)
		{
			sum += i;	
		}
		cout << sum << endl << endl;
	}
}
