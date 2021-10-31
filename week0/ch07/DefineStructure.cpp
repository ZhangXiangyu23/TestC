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
	printf("学号是:%d,姓名为:%s,性别为:%c,住址为:%s\n",a.num,a.name,a.sex,a.address);
	return 0;	
} 
