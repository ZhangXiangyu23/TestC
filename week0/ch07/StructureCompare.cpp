#include <stdio.h>

struct student{
	int num;
	char name[30];
	int score;
};


int main()
{
	struct student a[2];
	printf("����������ѧ������Ϣ\n");
	for(int i=0;i<2;i++)
	{
		printf("ѧ��:");
		scanf("%d",&a[i].num);
		printf("����:");
		scanf("%s",&a[i].name);
		printf("�ɼ�:");
		scanf("%d",&a[i].score);
	}
	printf("************************\n"); 
	if(a[0].score>a[1].score)
	{
		printf("ѧ��:%d\n����:%s\n�ɼ�:%d\n",a[0].num,a[0].name,a[0].score);	
	}
	if(a[1].score>a[0].score)
	{
		printf("ѧ��:%d\n����:%s\n�ɼ�:%d\n",a[1].num,a[1].name,a[1].score);		
	}
	if(a[1].score==a[0].score)
	{
		printf("ѧ��:%d\n����:%s\n�ɼ�:%d\n",a[0].num,a[0].name,a[0].score);
		printf("ѧ��:%d\n����:%s\n�ɼ�:%d\n",a[1].num,a[1].name,a[1].score);	
	}
	
	 
}
