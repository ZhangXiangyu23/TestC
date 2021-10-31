#include <stdio.h>

int main()
{
	printf("请依次输入五个值:\n");
	int a[5];
	int* p=a;//将数组的首地址赋值给了指针变量p 
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("加倍之前\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",a[i]);	
	}
	printf("\n");
	//加倍
	for(int i=0;i<5;i++)
	{
		*(a+i)=*(a+i)*2;	
	} 
	
	printf("加倍之后:\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
