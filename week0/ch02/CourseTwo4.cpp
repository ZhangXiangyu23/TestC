#include <stdio.h>

int main()
{
	char score;
	printf("������ɼ��ȼ�:\n");
	scanf("%c",&score);
	switch(score)
	{
		case 'A':printf("���ķ�����85~100");  break;
		case 'B':printf("���ķ�����70~84");   break;			
		case 'C':printf("���ķ�����60~69");	  break;
		case 'D':printf("���ķ�����0~59");    break;
		default:printf("�������������,���������!"); break;
	}
	return 0; 
} 
