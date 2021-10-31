#include <stdio.h>

int main()
{
	int x;
	printf("请输入一个整数\n");
	scanf("%d",&x);
	if(x<0)
	{
		printf("y=-1\n");
	}
	else if(x==0)
	{
		printf("y=0\n");
	}
	else
	{
		printf("y=1\n");
	}
	return 0;	
} 
