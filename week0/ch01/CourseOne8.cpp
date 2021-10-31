#include <stdio.h>
#include <math.h>
int main()
{
	printf("请您输入a,b,c的值\n");
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("这个二次函数为:%dx^2+%dx+%d=0",a,b,c);
	int dianta=b*b-4*a*c;
	int x1=(sqrt(dianta)-b)/(2*a);
	int x2=(-sqrt(dianta)-b)/(2*a);
	printf("第一个根为:%d\n",x1);
	printf("第二个根为:%d\n",x2);
	 
	return 0;
}
