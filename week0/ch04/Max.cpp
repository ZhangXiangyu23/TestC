#include <stdio.h>

int main()
{
	int a[3][3]={1,2,3,9,8,7,-10,10,-5};
	int max=a[0][0];
	for(int i=0;i<3;i++)
	{
		for(int j=1;j<3;j++)
		{
			if(a[i][j]>max)
			{
				int term=a[i][j];
				a[i][j]=max;
				max=term;
			}
		}
	}
	
	printf("数组中最大的值是:%d\n",max);
	
	
	return 0;
}
