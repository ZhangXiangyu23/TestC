#include <stdio.h>

//2*4*6*....*100 
int main()
{
	int chengji=1;
	int n=1;
	int a=2;
	while(n<=50)
	{
		n=n+1;
		chengji=chengji*a;
		a=a+2;	
	}
	printf("最后的乘积为:%d",chengji);	
}
