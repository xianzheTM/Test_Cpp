//http://222.22.91.42/view/practice/display.aspx?qid=1009#flag ID1009 »Î√≈
#include <iostream>

using namespace std;

int main()
{

	char gender;
	int Results1, Results2, Results3, Results4;
	char student_ID[20];
	cin >> student_ID >> gender >> Results1 >> Results2 >> Results3 >> Results4;

	if (((Results1 + Results2 + Results3 + Results4) / 4.0) > 85)
		cout << student_ID << " " << "y";
	else
		cout << student_ID << " " << "n";
	return 0;

}