#include <stdio.h>

int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int (*p)[3];  //ָ��ָ���б���
	p=a;
	int i,j;
	printf("��������i,��j",i,j);
	scanf("%d",&i);
	scanf("%d",&j);
	i=i-1;
	j=j-1;
	printf("��Ԫ��Ϊ:%d",*(*(p+i)+j)); 
	
}
