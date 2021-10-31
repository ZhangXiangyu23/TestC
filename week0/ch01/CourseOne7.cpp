#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c,s;
	printf("请依次输入三角形的三边\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	s=(a+b+c)/2;
	int area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("面积为:%d",area);
	return 0;	
} 
