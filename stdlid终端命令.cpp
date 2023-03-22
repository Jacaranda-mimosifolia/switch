//<stdlid.h>调用终端命令
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//定义变量 
	char a,b,x,y;
	int c,z;
	//方法一:
	printf("方法一:使用getchar函数\n请输入运算数字:");
	a = getchar();
	b = getchar();
	c = (a-48)*10+(b-48);
	printf("输出结果为:%d\n",c*10);
	//方法二:
	printf("方法二:使用scanf函数\n请输入运算数字:");
	getchar();//摘掉缓存区中的换行符 
	scanf("%c%c",&x,&y);
	z = (x-48)*10+(y-48);
	printf("输出结果为:%d\n",z*10);
	system("pause");//使用终端指令冻结终端窗口 
	return 0;}


