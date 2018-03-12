//http://222.22.91.42/view/practice/display.aspx?qid=1071#flag ID1071 一般
#include<iostream>
#include <iomanip>
using namespace std;
double fee, price;
double CancelFee(double price)
{
	fee = price*0.05;
	if (fee - int(fee) < 0.25)
	{
		return int(fee);
	}
	if (fee - int(fee) >= 0.25&&fee - int(fee) < 0.75)
	{
		return int(fee)+0.5;
	}
	if (fee - int(fee) >= 0.75)
	{
		return int(fee) +1;
	}
	return 0;
}
int main()
{
	while (cin>>price)
	{
		cout << setiosflags(ios::fixed) << setprecision(1) <<CancelFee(price)<<endl;
	}
	return 0;
}