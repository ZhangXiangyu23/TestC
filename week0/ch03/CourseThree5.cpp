#include <stdio.h>

int main()
{
	int a=100;
	while(a<=300)
	{
//		if(a%4!=0)
//		{
//			printf("%d不能被4整除！\n",a);
//		}
//		a++;
		if(a%4==0)
		{
			a++; 
			continue;
			
		}
		else
		{
			printf("%d\n",a);
			a++;
		} 
	
	}
	
}
