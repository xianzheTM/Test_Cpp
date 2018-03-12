//http://222.22.91.42/view/practice/display.aspx?qid=1049#flag ID1049 
#include<iostream>    
using namespace std;
#define limit 100000000    
int factorial()
{
	static int times = 1, fact = 1;
	fact *= times;
	times++;
	if (fact < limit)
		return 1;
	else
	{
		cout << fact << " " << times - 1 << endl;
		return 0;
	}
}
int main()
{
	int i, n;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		if (!factorial())
			break;
	}
	return 0;
}