#include <stdio.h>

int main()
{
	//求123和456的和
	int a=123;
	int b=456;
	int c;
	printf("%d与%d之和为%d",a,b,(a+b));
	
	
	printf("**************************小测试\n");
	printf("加密之前的名字为:oyra\n");
	//开始加密
	char Old1='o';
	char Old2='y';
	char Old3='r';
	char Old4='a';
	char New1=Old1+1;
	char New2=Old2+1;
	char New3=Old3+1;
	char New4=Old4+1;
	printf("加密之后:%c%c%c%c\n",New1,New2,New3,New4);
	return 0;	
} 
