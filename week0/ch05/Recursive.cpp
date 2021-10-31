#include <stdio.h>

//求n! 
int main()
{
	int f(int a);
	printf("请输入要求几的阶乘\n");
	int n;
	scanf("%d",&n);
	printf("%d的阶乘为:%d\n",n,f(n));
}

int f(int n)
{

		if(n==0||n==1)
		{
			return 1;
		}
		else
		{
			return f(n-1)*n;
		}
	
	

}
