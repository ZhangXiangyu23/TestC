#include <stdio.h>

int main()
{
	printf("����������10������������\n");
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
	//ѡ������
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
	
	printf("����֮��:\n");
	for(int i=0;i<10;i++)
	{
		printf("%d\t",a[i]);	
	}
	
	
	return 0;	
} 
