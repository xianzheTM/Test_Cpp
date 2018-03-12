/*
#include <iostream>
#include <climits>
using namespace std;



int main()
{
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof(n_short) << " bytes." << endl;
	cout << "long is " << sizeof(long) << " bytes." << endl;
	cout << "long long is " << sizeof(long long) << " bytes." << endl;
	cout << "void* " << sizeof(void*) << " bytes." << endl;
	cout << endl;

	cout << "Maximum values:" << endl;
	cout << "int:" << n_int << endl;
	cout << "short:" << n_short << endl;
	cout << "long:" << n_long << endl;
	cout << "long long:" << n_llong << endl << endl;

	cout << "Minimum int value =" << INT_MIN << endl;
	cout << "Bits per byte =" << CHAR_BIT << endl;

	system("pause");
	return 0;
}
*/

/*
void str1(void);
void str2(void);
int main()
{
	str1();
	str2();
	return 0;
}

void str1()
{
	cout << "abcd" << endl;
	cout << "abcd" << endl;
}

void str2()
{
	cout << "efg" << endl;
	cout << "efg" << endl;
}
*/



//一个新招，使用\b退格，方便输入密码
/*
#include <iostream>

using namespace std;

int main()
{
	cout << "enter your code:________\b\b\b\b\b\b\b\b";
	long code;//声明变量ode
	cin >> code;
	cout << "your code is" << code << endl;
	return 0;
}
*/

/*
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char a1[100], b1[100];
	int a[100], b[100], c[100];
	int a1_len, b1_len, lenc, i, x;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));

	cin>>a1;
	cin>>b1; //输入加数与被加数

	a1_len = strlen(a1);
	b1_len = strlen(b1);

	for (i = 0; i <= a1_len - 1; i++)
	{
		a[a1_len - i] = a1[i] - 48; //将操作数放入a数组 　
	}

	for (i = 0; i <= b1_len - 1; i++)
	{
		b[b1_len - i] = b1[i] - 48; //将操作数放入b数组
	}

	lenc = 1;
	x = 0;

	while (lenc <= a1_len || lenc <= b1_len)
	{
		c[lenc] = a[lenc] + b[lenc] + x; //两数相加 　
		x = c[lenc] / 10;   //要进的位
		c[lenc] = c[lenc] % 10;     //进位后的数
		lenc++;     //数组下标加1
	}

	c[lenc] = x;
	if (c[lenc] == 0)
	{
		lenc--; //处理最高进位
	}

	for (i = lenc; i >= 1; i--)
	{
		cout << c[i]; //输出结果
	}
	cout << endl;

	return 0;
}
*/
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	typedef unsigned char *byte_pointer;
//	long sum=123456789;
//	cout << sizeof(sum) << endl;
//	int a = 3;
//	int b = a;
//	int c = 3;
//	int *p1 = &a;
//	int *p2 = &b;
//	int *p3 = &c;
//	cout << p1 << ' ' << p2 << ' ' << p3 << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	char slifs[4]{ 'h','i',1122011,'\0' };
//	long plifs[] = { 25,92,3.0 };
//	cout << slifs[1] << ' ' << plifs[1];
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[5] = { 's','d' };
//	char cat1[4] = { 'c','a','t','\0' };	//a string
//	char cat2[4] = { 'c','a','t','!' };	//a char array but not a string
//	for (size_t i = 0; i <= 9; i++)
//	{
//		cout << *(&cat2[i]);
//	}
//	cout << endl << &cat2 << endl << &cat1 << endl << &a << endl;
//	cout << *((&cat2) - 8) << ' ';
//	cout << (&cat2) - 0;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	char a1[3];
//	char a2[3];
//
//	cout << a1 << a2;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>			//make string class available
//#include <cstring>			//C-style string library
//int main()
//{
//	using namespace std;
//	char charr1[20];
//	char charr2[20] = "jaguar";
//	string str1;
//	string str2 = "panther";
//
//	// assignment for string objects and character arrays 
//	str1 = str2;				// copy str2 to strl
//	strcpy_s(charr1, charr2);	 //copy charr2 to charrl
//
//							 // appending for string objects and character arrays 
//	str1 += " paste";			//add paste to end of strl
//	strcat_s(charr1, " juice");	 //add juice to end of charrl
//
//								 // finding the length of a string object and a C-style string 
//	unsigned long long int len1 = str1.size();	 //obtain length of	strl
//	unsigned long long int len2 = strlen(charr1);	//obtain length of charrl
//	cout << "The string " << str1 << " contains " << len1 << " characters.\n";
//	cout << "The string " << charr1 << " contains " << len2 << " characters.\n";
//
//	return 0;
//}
//#include <iostream>
//#include <string>	// make string class available
//#include <cstring>	// C-style string library
//int main()
//{
//	using namespace std; char charr[20]; string str;
//	cout << "Length of string in charr before input:" << strlen(charr) << endl;
//	cout << "Length of string in str before input:" << str.size() << endl;
//	cout << "Enter a line of text:\n";
//	cin.getline(charr, 20);	// indicate maximum length
//	cout << "You entered： " << charr << endl;
//	cout << "Enter another line of text:\n";
//	getline(cin, str);	// cin now an argument； no length specifier
//	cout << "You entered： " << str << endl;
//	cout << "Length of string in charr after input:" << strlen(charr) << endl;
//	cout << "Length of string in str after input:" << str.size() << endl;
//	system("pause");
//	return 0;
//}