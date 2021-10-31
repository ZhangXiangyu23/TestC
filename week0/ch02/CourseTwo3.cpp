#include <stdio.h>

int main()
{
	char c;
	printf("请输入一个字符:\n");
	scanf("%c",&c);
	if(c>=65&&c<=90)
	{
		printf("%c是大写字母",c);
		char f=c+32;
		printf("，转化之后为:%c",f);
	}
	else
	{
		printf("%c不是大写字符",c);
		printf(",输出字符为：%c\n",c); 
	}
}
