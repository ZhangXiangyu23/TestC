#include <stdio.h>
int main()
{
	printf("������һ������0С��999�Ŀ��Դ�С��������\n");
	double a;
	scanf("%lf",&a);
	int b=int(a/100);  //��λ 
	int c=int((int(a))%100)/10;
	int d=((int(a))%100)%10;
	printf("%lf�İ�λ��%d\n",a,b);
	printf("%lf��ʮλ��%d\n",a,c);
	printf("%lf�ĸ�λ��%d\n",a,d);
	
	
	return 0;
}
