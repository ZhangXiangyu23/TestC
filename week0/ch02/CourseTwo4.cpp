#include <stdio.h>

int main()
{
	char score;
	printf("请输入成绩等级:\n");
	scanf("%c",&score);
	switch(score)
	{
		case 'A':printf("您的分数在85~100");  break;
		case 'B':printf("您的分数在70~84");   break;			
		case 'C':printf("您的分数在60~69");	  break;
		case 'D':printf("您的分数在0~59");    break;
		default:printf("您输入的有问题,请重新输出!"); break;
	}
	return 0; 
} 
