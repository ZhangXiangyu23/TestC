#include <stdio.h>

int main()
{
	printf("请依次输入面积值\n");
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
	//冒泡排序
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int term=a[j];
				a[j]=a[j+1];
				a[j+1]=term;
			}
		}	
	}
	printf("排序之后:\n");
	for(int i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
}
