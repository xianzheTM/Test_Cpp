//http://222.22.91.42/view/practice/display.aspx?qid=1076#flag ID1073 简单
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int array[500];
	cin >> n;
	for (int i=0;i<n;++i)
	{
		cin >> array[i];
	}
	cout << *max_element(array,array+n) << endl;
	system("pause");
	return 0;
}