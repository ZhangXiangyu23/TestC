#include <stdio.h>
int main()
{
	printf("请输入一个大于0小于999的可以带小数的数字\n");
	double a;
	scanf("%lf",&a);
	int b=int(a/100);  //百位 
	int c=int((int(a))%100)/10;
	int d=((int(a))%100)%10;
	printf("%lf的百位是%d\n",a,b);
	printf("%lf的十位是%d\n",a,c);
	printf("%lf的个位是%d\n",a,d);
	
	
	return 0;
}
