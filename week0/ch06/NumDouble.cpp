#include <stdio.h>

int main()
{
	printf("�������������ֵ:\n");
	int a[5];
	int* p=a;//��������׵�ַ��ֵ����ָ�����p 
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("�ӱ�֮ǰ\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",a[i]);	
	}
	printf("\n");
	//�ӱ�
	for(int i=0;i<5;i++)
	{
		*(a+i)=*(a+i)*2;	
	} 
	
	printf("�ӱ�֮��:\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
