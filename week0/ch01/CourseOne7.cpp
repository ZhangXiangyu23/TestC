#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c,s;
	printf("���������������ε�����\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	s=(a+b+c)/2;
	int area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("���Ϊ:%d",area);
	return 0;	
} 
