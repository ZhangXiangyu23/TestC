#include <stdio.h>

int  main()
{
	int n=1;
	int sum=0;
	int a=1;
	while(n<=20)
	{
		n=n+1;
		sum=sum+a;
		a=a*n;	
	}
	printf("1£¡+2£¡+3£¡+.....+20!=%d\n",sum); 
		
} 
