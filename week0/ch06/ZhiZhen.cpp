#include <stdio.h>

int main()
{
	int a;
	int b;
	scanf("%d",&a);
	scanf("%d",&b);
	int* za=&a;
	int* zb=&b;
	printf("************\n");
	if(*za>*zb)
	{
		printf("%d\n",*za);
		printf("%d\n",*zb);
	}
	else
	{
		printf("%d\n",*zb);
		printf("%d\n",*za);
	}
	
	return 0;
}
