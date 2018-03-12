//http://222.22.91.42/view/practice/display.aspx?qid=1018#flag ID1018 入门
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	cout << a[0] << " " << a[1] << " " << a[2]<<endl;
	system("pause");
	return 0;
}

/*
#include<iostream>
using namespace std;
int main()
{
int x,y,z,t;
cin>>x>>y>>z;
if(x<y) {t=y;y=x;x=t;}
if(x<z) {t=z;z=x;x=t;}
if(y<z) {t=z;z=y;y=t;}
cout<<z<<" "<<y<<" "<<x<<endl;
return 0;
}
*/