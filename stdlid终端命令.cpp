//<stdlid.h>�����ն�����
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//������� 
	char a,b,x,y;
	int c,z;
	//����һ:
	printf("����һ:ʹ��getchar����\n��������������:");
	a = getchar();
	b = getchar();
	c = (a-48)*10+(b-48);
	printf("������Ϊ:%d\n",c*10);
	//������:
	printf("������:ʹ��scanf����\n��������������:");
	getchar();//ժ���������еĻ��з� 
	scanf("%c%c",&x,&y);
	z = (x-48)*10+(y-48);
	printf("������Ϊ:%d\n",z*10);
	system("pause");//ʹ���ն�ָ����ն˴��� 
	return 0;}


