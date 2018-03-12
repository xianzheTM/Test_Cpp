//http://222.22.91.42/view/practice/display.aspx?qid=1085#flag ID1085 一般
//又是找不到问题出在哪，测试多遍，和正确答案一样的，emmmmmm,祭出长者保佑我
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
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int k, m;
	bool flag = false;
	cin >> k;
	for (int i = 0; i < k; ++i)
	{
		int array[10000];
		int n;
		flag = true;
		for (n = 0;; ++n)
		{//这里写的有点复杂，用途在于区别输入的是空格还是换行，cin.get()可以读取空格和换行，用getchar会更加方便
			if (flag == true)
			{
				cin >> array[n];
				flag = false;
			}
			else
			{
				array[n] = cin.get();
			}
			if (array[n] == ' ')
			{
				cin >> array[n];
			}
			if (array[n] == '\n')
			{
				cin >> m;
				array[n] = m;
				sort(array, array + n + 1);
				break;
			}
		}
		for (int j = 0; j <= n; ++j)
		{
			if (j == n)
			{
				cout << array[j] << endl;
			}
			else
			{
				cout << array[j] << " ";
			}
		}
	}
	system("pause");
	return 0;
}
/*
 #include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int k,n=0,m,i,a[20000];
	cin>>k;
	while(k--)
	{
		for(i=0;i<=10000;i++)
	   {
		cin>>a[i];
		if(getchar()=='\n')
		 {n=i+1; break;}
	   }
		cin>>m;
		a[n]=m;
		sort(a,a+n+1);
		for(i=0;i<=n;i++)
		{
			if(i==n)
				cout<<a[i]<<endl;
			else
				cout<<a[i]<<" ";
		}
	}
	 return 0;
}

 */
