#include <stdio.h>

//��n! 
int main()
{
	int f(int a);
	printf("������Ҫ�󼸵Ľ׳�\n");
	int n;
	scanf("%d",&n);
	printf("%d�Ľ׳�Ϊ:%d\n",n,f(n));
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
