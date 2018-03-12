//http://222.22.91.42/view/practice/display.aspx?qid=1282#flag ID1282
#include <iostream>
using namespace std;

int * inputdata(int n)
{
	int * pdata;
	if (n > 0)
	{
		pdata = new int[n];//！注意，申请新的内存空间A，由指针pdata指向
		for (int i = 0; i < n; i++)
			cin >> pdata[i];
	}
	else
		pdata = NULL;
	return pdata;//注意这里，返回给data,由data指向申请的空间A，地址指向的是数组
}

int * filter_mean(int * data, int n)   //均值滤波
{
	if (data == NULL || n == 0)
		return NULL;
	int *dest_data = new int[n];
	dest_data[0] = (data[0] + data[1]) / 2;
	for (int i = 1; i < n - 1; i++)
		dest_data[i] = (data[i - 1] + data[i] + data[i + 1]) / 3;
	dest_data[n - 1] = (data[n - 2] + data[n - 1]) / 2;
	return dest_data;
}
/*数组名的本质就是数组的首地址,可以理解为指向数组的指针*/
/*两个函数里都申请了新的内存B，由dest_data指向，return将该地址给了result*/
int *filter_middle(int *data, int n)   //中值滤波
{
	if (data == NULL || n == 0)
		return NULL;
	int i;
	int *dest_data = new int[n];
	dest_data[0] = data[0];
	for (i = 1; i < n - 1; i++)
	{
		int a, b, c, t;
		a = data[i - 1]; b = data[i]; c = data[i + 1];
		if (b > a) { t = a; a = b; b = t; }
		if (c > a) { t = a; a = c; c = t; }
		if (c > b) { t = b; b = c; c = t; }
		dest_data[i] = b;
	}
	dest_data[n - 1] = data[n - 1];
	return dest_data;
}

int main()
{
	int *data = NULL;   //Used to save the data to be filtered
	int n;            //the quantity of data
	int select;       
	int *result = NULL; //Used to save the filtered result
	int i;
	cin >> n;           //
	data = inputdata(n);//data现在指向的是用于存放数组申请的内存空间A，用于存放输入的数据
	cin >> select;      //input the number to select the algorithm
	if (select == 1)    
		result = filter_mean(data, n);
	else if (select == 2)
		result = filter_middle(data, n);
	//result用来指向申请的空间B，里面现在存放的是处理后的数据
	else
		goto q;
	cout << result[0];
	for (i = 1; i < n; i++)
		cout << " " << result[i];
	cout << endl;
q://when variable(padata) of function(inputdata) isn't null,program need to release memory.
	{
		if (data != NULL)
		{
			delete data;
		}
		if (result != NULL)
		{
			delete data;
		}
	}
	system("pause");
	return 0;
}

