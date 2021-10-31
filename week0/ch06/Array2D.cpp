#include <stdio.h>


//ถþฮฌสýื้
int main()
{
	int a[3][4]={1,2,3,4,5,6,6,5,4,3,2,1};
	int* p=&a[0][0];
	for(int i=0;i<12;i++)
	{
		printf("%d\t",*(p+i));
	}
	
} 
