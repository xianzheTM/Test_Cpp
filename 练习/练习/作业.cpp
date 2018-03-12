#include <iostream>

using namespace std;
//求是否能被5和7整除
/*
int main()
{
int n;
cout << "输入一个整数n:" ;
cin >> n;
if ((n%5==0)&&(n%7==0))
cout<<n<<"能被5和7整除。";
else
cout<<n<<"不能被5和7整除。";
return 0;
}
*/

/*
int main()
{
double score;
cout<<"输入成绩（0~100）：";
cin>>score;
if(score>=90)
{
cout<<"你的等级为A";
}
else if(80<=score && score<=89)
{
cout<<"你的等级为B";
}
else if(70<=score && score<=79)
{
cout<<"你的等级为C";
}
else if(60<=score && score<=69)
{
cout<<"你的等级为D";
}
else
cout<<"你的等级为E";
retuen 0;
}
*/


int main()
{
	double price;
	cout << "输入你的消费金额：";
	cin >> price;
	if (price < 1000)
		cout << "低于1000，不参加活动。";
	int i = price / 1000;
	switch (i)
	{
	case 1:cout << "九五折，" << "最终金额为" << price*0.95 << endl; break;
	case 2:cout << "九折，" << "最终金额为" << price*0.9 << endl; break;
	case 3:
	case 4:cout << "八五折，" << "最终金额为" << price*0.85 << endl; break;
	default:cout << "八折，" << "最终金额为" << price*0.8 << endl;
	}
	return 0;
}

