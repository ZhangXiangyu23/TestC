#include <stdio.h>

struct student{
	int num;
	char name[30];
	char sex;
	char address[30]; 
};


int main()
{
	struct student a={001,"houge",'M',"hua guo shan"};
	printf("ѧ����:%d,����Ϊ:%s,�Ա�Ϊ:%c,סַΪ:%s\n",a.num,a.name,a.sex,a.address);
	return 0;	
} 
