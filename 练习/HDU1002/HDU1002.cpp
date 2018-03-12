#include <iostream>  
#include <string>

using namespace std;

string reverseStr(string input)
{
	string output = "";
	for (int i = 0; i < input.length(); i++)
	{
		output.insert(output.begin(), input[i]);
	}
	return output;
}

int charToInt(char c) {
	return c - '0';
}

char intToChar(int n) {
	return '0' + n;
}

string sum(string &rs1, string &rs2)// 这里两个‘&’表示引用s1,s2作为参数，具体用法参考https://www.cnblogs.com/Mr-xu/archive/2012/08/07/2626973.html
{
	string Sum;
	int s1_len = rs1.length(), s2_len = rs2.length();
	int subscript = 0;
	int x = 0;
	while (subscript <= s1_len || subscript <= s2_len)
	{
		int temp = 0;
		temp = charToInt(rs1[subscript]) + charToInt(rs2[subscript]) + x;
		x = temp / 10;
		Sum[subscript] = intToChar(temp % 10);
		subscript++;
	}
	int temp1 = 0;
	temp1 = x;
	if (temp1 == 0)
	{
		temp1--;
	}
	int j;
	string Result;
	for (j = temp1; j >= 1; j--)
	{
		Result = Sum[temp1];
	}
	return Result;
}

void main()
{

	int num;
	cin >> num;
	int i = 1;
	int count = num;

	while (num)
	{
		string s1, s2, rs1, rs2;
		cin >> s1 >> s2;
		rs1 = reverseStr(s1), rs2 = reverseStr(s2);
		cout << "Case " << i << ":" << endl;
		cout << s1 << " + " << s2 << " = " << sum(s1, s2) << endl;//“ + ”前后是有空格的  
		if (i < count)
			cout << endl;
		num--;
		i++;
		//cout<<sum(s1,s2)<<endl;  
	}
	system("pause");
}

