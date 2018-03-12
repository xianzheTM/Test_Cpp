/*#include<iostream>
using namespace std;

int main()
{
	char Str[4] = { 'a',' ','b' };
	//int a = 3;
	//int *pa=&a;


	char *pa = &Str[0];
	cout << (void*)pa;
	//cout<<&Str[0]<<endl;
	//cout<<&Str[1]<<endl;
	//cout<<&Str[2]<<endl;
	system("pause");
	return 0;
}
*/
#include<iostream>
typedef unsigned char *byte_pointer; //定义一个声明char型指针的方式,用于强制类型转换，不论原来是什么，指针指向的被看成是字符
void show_bytes(byte_pointer start, int len)//参数：char型指针start和长度
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%.2x", start[i]);//
	}
	printf("\n");
}

void show_int(int x)
{
	show_bytes((byte_pointer)&x, sizeof(int));//对x取地址，int的存储长度
}

void show_float(float x)
{
	show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void *x)//void表示没有相关联的数据类型
{
	show_bytes((byte_pointer)&x, sizeof(void *));
}

void test_show_bytes(int val)
{
	int ival = val;
	float fval = float(ival);
	int *pval = &ival;
	int *ppval = &val;
	show_int(ival);
	//show_float(fval);
	//show_pointer(pval);
	//show_pointer(ppval);
}
int main()
{
	test_show_bytes(1);
	system("pause");
	return 0;
}