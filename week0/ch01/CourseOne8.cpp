#include <stdio.h>
#include <math.h>
int main()
{
	printf("��������a,b,c��ֵ\n");
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("������κ���Ϊ:%dx^2+%dx+%d=0",a,b,c);
	int dianta=b*b-4*a*c;
	int x1=(sqrt(dianta)-b)/(2*a);
	int x2=(-sqrt(dianta)-b)/(2*a);
	printf("��һ����Ϊ:%d\n",x1);
	printf("�ڶ�����Ϊ:%d\n",x2);
	 
	return 0;
}
