#include <stdio.h>

int main()
{
	printf("请输入一个大写字母:\n");
	char Da;
	scanf("%c",&Da);//输入 
	char Xiao=Da+32;
	printf("%c对应的小写字母是%c\n",Da,Xiao);
}
