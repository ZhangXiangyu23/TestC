#include <stdio.h>

int main()
{
	//getchar 和putchar的使用
	char a=getchar();
	char b=getchar();
	char c=getchar();
	//回车也是一个字符，能被getchar()所吸收！！ 
	a=a+32;
	b=b+32;
	c=c+32;
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n'); 
	return 0;	
} 
