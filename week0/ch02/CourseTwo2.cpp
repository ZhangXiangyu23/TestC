#include <stdio.h>

int main()
{
	//判断某一年是否是闰年
	printf("请输入年份\n");
	int year;
	scanf("%d",&year);
	if((year%100!=0&&year%4==0)||(year%100==0&&year%400==0))
	{
		printf("%d年是闰年!\n",year);	
	}
	else
	{
		printf("%d年不是闰年!\n",year);	
	} 
}
