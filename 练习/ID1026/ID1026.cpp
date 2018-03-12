//http://222.22.91.42/view/practice/display.aspx?qid=1026#flag ID1026 »Î√≈
#include <iostream>
using namespace std;
int main()
{
	char s1, s2, s3,t;
	while (cin >> s1 >> s2 >> s3)
	{
		if (s1 > s2)
		{
			t = s1; s1 = s2; s2 = t;
		}
		if (s1 > s3)
		{
			t = s1; s1 = s3; s3 = t;
		}
		if (s2 > s3)
		{
			t = s2; s2 = s3; s3 = t;
		}
		cout << s1 << " " << s2 << " " << s3 << endl;
	}
	return 0;

}