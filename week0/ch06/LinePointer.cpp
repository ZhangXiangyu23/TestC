#include <stdio.h>

int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int (*p)[3];  //指针指向行变量
	p=a;
	int i,j;
	printf("请输入行i,列j",i,j);
	scanf("%d",&i);
	scanf("%d",&j);
	i=i-1;
	j=j-1;
	printf("该元素为:%d",*(*(p+i)+j)); 
	
}
