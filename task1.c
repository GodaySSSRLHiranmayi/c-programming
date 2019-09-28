#include<stdio.h>
void main()
{
	long int num;
	int age=0;
	char name[10];
	printf("enter your name:");
	scanf("%s",&name);
	printf("enter your age:");
	scanf("%d",&age);
	printf("enter your phone number:");
	scanf("%d",&num);
	printf("your name is %s",name);
	printf("\nyour age is %d",age);
	printf("\nyour phone number is %d",num);
}
