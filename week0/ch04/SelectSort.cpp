#include <stdio.h>

int main()
{
	printf("请依次输入10个地区的面试\n");
	int a[10];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);	
	}
	printf("排序之前:\n");
	for(int i=0;i<10;i++)
	{
		printf("%d\t",a[i]);	
	}
	printf("\n");
	//选择排序
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(a[j]<a[i])
			{
				int term=a[i];
				a[i]=a[j];
				a[j]=term;	
			}	
		}	
	}
	
	printf("排序之后:\n");
	for(int i=0;i<10;i++)
	{
		printf("%d\t",a[i]);	
	}
	
	
	return 0;	
} 
