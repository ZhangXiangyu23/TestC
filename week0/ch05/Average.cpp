#include <stdio.h>

int main()
{
	
	//����һ��
	double average(double a[],int n);
	double a[5];//A�� 
	double b[10];	//B��
	printf("����������A��ĳɼ�\n");
	for(int i=0;i<5;i++)
	{
		scanf("%lf",&a[i]);	
	}
	
	printf("����������B��ĳɼ�\n");
	for(int i=0;i<10;i++)
	{
		scanf("%lf",&b[i]);	
	}
	printf("A���ƽ������%lf\n",average(a,5));
	printf("B���ƽ������%lf\n",average(b,10));
	return 0;		
}


double average(double a[],int n)
{
	double sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	double av=sum/n;
	return av; 
}
 





