#include <stdio.h>

int main()
{
	//getchar ��putchar��ʹ��
	char a=getchar();
	char b=getchar();
	char c=getchar();
	//�س�Ҳ��һ���ַ����ܱ�getchar()�����գ��� 
	a=a+32;
	b=b+32;
	c=c+32;
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n'); 
	return 0;	
} 
