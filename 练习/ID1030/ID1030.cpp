//http://222.22.91.42/view/practice/display.aspx?qid=1030#flag 一般 ID1030
//伪一般题 ，该题最开始做的有点复杂，仔细一想求sum有规律，就是找规律题。
#include<iostream>  
using namespace std;
int main()
{
	int n, sum, i;
	sum = 1;
	cin >> n;
	for (i = 1; i < n; i++)
		sum = (sum + 1) * 2;
	cout << sum << endl;
	system("pause");
}