#include <stdio.h>

struct student{
	int num;
	char name[30];
	int score;
};


int main()
{
	struct student a[2];
	printf("请输入两个学生的信息\n");
	for(int i=0;i<2;i++)
	{
		printf("学号:");
		scanf("%d",&a[i].num);
		printf("姓名:");
		scanf("%s",&a[i].name);
		printf("成绩:");
		scanf("%d",&a[i].score);
	}
	printf("************************\n"); 
	if(a[0].score>a[1].score)
	{
		printf("学号:%d\n姓名:%s\n成绩:%d\n",a[0].num,a[0].name,a[0].score);	
	}
	if(a[1].score>a[0].score)
	{
		printf("学号:%d\n姓名:%s\n成绩:%d\n",a[1].num,a[1].name,a[1].score);		
	}
	if(a[1].score==a[0].score)
	{
		printf("学号:%d\n姓名:%s\n成绩:%d\n",a[0].num,a[0].name,a[0].score);
		printf("学号:%d\n姓名:%s\n成绩:%d\n",a[1].num,a[1].name,a[1].score);	
	}
	
	 
}
