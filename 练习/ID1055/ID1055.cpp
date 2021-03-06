//http://222.22.91.42/view/practice/display.aspx?qid=1055#flag ID1055 一般
#include <iostream>
#include <list>
using std::cout;
using std::endl;
using std::cin;
using std::list;

int main()
{
	int total = 0;
	
	int number = 0;
	
	while (cin>>total>>number)
	{
		/* If number = 3
		* f(1) = 0
		* f(2) = 1 = (f(1) + 3) % 2
		* f(3) = 1 = (f(2) + 3) % 3
		* f(4) = 0 = (f(3) + 3) % 4
		* f(5) = 3 = (f(4) + 3) % 5
		* ...
		* f(n) = x = (f(n-1) + 3) % n
		* */

		int last = 0; // f(1) = 0
		for (int i = 2; i <= total; ++i)
		{
			last = (last + number) % i;
		}
		cout << last + 1 << endl;
	}
	
	system("pause");
	return 0;
}

//普通数组，超时
/*
int main()
{
	int i;          //i用来记录数的那个数字   
	int n, m;
	int k, j;        //k用来记录淘汰的人数 ,j用来表示第j个人   
	//cout << "请输入总人数n和用于淘汰的数字m:";
	while (cin >> n >> m)
	{
		int *Array = new int[n];
		//对n个人进行编号   
		for (i = 0; i < n; i++)
		{
			Array[i] = i + 1;
		}
		i = 1;
		k = 0;
		//因为n个人围成一个圈，所以当j>n的时候，j要除n取余，例如（n+1）%n=1.之所以要++j，而不是j++是因为要先加1再判断
		for (j = 0; k < n - 1; j = ++j%n)
		{
			if (Array[j] != 0)//当j对应的人没有被淘汰时参与进来，淘汰的直接忽略   
			{
				if (i == m)        //当j对应的人数到m的时候   
				{
					k++;        //淘汰人数加1   
					Array[j] = 0; //对应数组中的数据置为0   
					i = 1;        //重新开始报数   
				}
				else
				{
					i++;        //当j对应的人数没有数到m，则进行下一个   
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			if (Array[i] != 0)//通过上面的操作，所有淘汰的人员数组对应的值都为0，不为0的就是留下来的   
			{
				cout << i + 1 << endl;
			}
		}
	}
	cout << endl;
	system("pause");
	return 0;
}
*/
//递归法（1<=n,m<=1000000，数字太大，不满足要求）
/*
int josephus(int n, int m) {
	if (n == 1) {
		return 0;
	}
	else {
		return (josephus(n - 1, m) + m) % n;
	}
}

int main()
{
	int n, m;
	while (cin>>n>>m)
	{
		cout<<josephus(n, m)+1;//函数中编号是从0开始的，所以加一。
	}
}
*/
/**             无可奉告 一颗赛艇
*  uJjYJYYLLv7r7vJJ5kqSFFFUUjJ7rrr7LLYLJLJ7
*  JuJujuYLrvuEM@@@B@@@B@B@B@@@MG5Y7vLjYjJL
*  JYjYJvr7XM@BB8GOOE8ZEEO8GqM8OBBBMu77LLJ7
*  LJLY7ru@@@BOZ8O8NXFFuSkSu25X0OFZ8MZJ;vLv
*  YvL7i5@BM8OGGqk22uvriiriii;r7LuSZXEMXrvr
*  vv7iU@BMNkF1uY7v7rr;iiii:i:i:ii7JEPNBPir
*  L7iL@BM8Xjuujvv77rr;ri;i;:iiiii:iLXFOBJ:
*  7ri@B@MOFuUS2Y7L7777rii;:::::i:iirjPG@O:
*  7:1B@BBOPjXXSJvrL7rr7iiii:i::::i;iv5MBB,
*  r:0@BBM8SFPX2Y77rri::iirri:::::iii75O@G.
*  7:SB@BBGqXPk0122UJL::i::r:::i:i;i:v2@Bk.
*  ri:MB@BBEqEMGq2JLLL1u7.iX51u77LF27iSB@r,
*  ri,v@B@MB8@qqNEqN1u:5B8BOFE0S7ii7qMB@F::
*  ii,J80Eq1MZkqPPX5YkPE@B@iXPE52j7:vBjE7::
*  ii:7MSqkS0PvLv7rrii0@L.Z1iLr::ir:rO,vi::
*  ii::EZXPSkquLvii:iF@N:.,BUi7ri,::UY;r:::
*  i::.2ONXqkPXS5FUUEOPP;..iSPXkjLYLLrr:::,
*  :::,iMXNP0NPLriiLGZ@BB1P87;JuL7r:7ri:::,
*  :::,.UGqNX0EZF2uUjUuULr:::,:7uuvv77::::.
*  ::::..5OXqXNJ50NSY;i:.,,,:i77Yvr;v;,,::.
*  :::,:.jOEPqPJiqBMMMO8NqP0SYLJriirv:.:,:.
*  ,:,,,.,Zq0P0X7vPFqF1ujLv7r:irrr7j7.,,::.
*  ,,,....0qk0080v75ujLLv7ri:i:rvj2J...,,,.
*  ......8@UXqZEMNvJjr;ii::,:::7uuv...,.,,.
*  .....B@BOvX88GMGk52vririiirJS1i.......,.
*  .JEMB@B@BMvL0MOMMMO8PE8GPqSk2L:.........
*  @B@@@B@M@B@L:7PGBOO8MOMOEP0Xri@B@Mk7,...
*  B@B@BBMBB@B@0::rJP8MO0uvvu7..,B@B@B@B@Z7
*  MMBM@BBB@B@B@Br:i,..:Lur:....7@OMMBM@B@@
*  8OOMMMOMMMMBB@B:....,PZENNi..JBOZ8GMOOOO
*/
//这题拖拖拉拉写了好久，主要问题在于：递归和数组遇上太大的数据都会超时，琢磨了很久才发现有数学规律可以直接用，心累。。。
//放上长者照片保平安。+1s
