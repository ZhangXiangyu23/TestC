#include <stdio.h>

int main()
{
	
	//声明一下
	double average(double a[],int n);
	double a[5];//A组 
	double b[10];	//B组
	printf("请依次输入A组的成绩\n");
	for(int i=0;i<5;i++)
	{
		scanf("%lf",&a[i]);	
	}
	
	printf("请依次输入B组的成绩\n");
	for(int i=0;i<10;i++)
	{
		scanf("%lf",&b[i]);	
	}
	printf("A组的平均分是%lf\n",average(a,5));
	printf("B组的平均分是%lf\n",average(b,10));
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
 





