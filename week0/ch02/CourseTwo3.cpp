#include <stdio.h>

int main()
{
	char c;
	printf("������һ���ַ�:\n");
	scanf("%c",&c);
	if(c>=65&&c<=90)
	{
		printf("%c�Ǵ�д��ĸ",c);
		char f=c+32;
		printf("��ת��֮��Ϊ:%c",f);
	}
	else
	{
		printf("%c���Ǵ�д�ַ�",c);
		printf(",����ַ�Ϊ��%c\n",c); 
	}
}
