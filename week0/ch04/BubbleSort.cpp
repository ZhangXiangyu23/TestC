#include <stdio.h>

int main()
{
	printf("�������������ֵ\n");
	int a[10];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("����֮ǰ:\n");
	for(int i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\n");
	//ð������
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
	printf("����֮��:\n");
	for(int i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
}
