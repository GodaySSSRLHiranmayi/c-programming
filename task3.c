#include<stdio.h>
void main()
{
	int m1,m2,m3;
    int sum=0;
	float avg=0;
	printf("enter marks of 1st subject:");
	scanf("%d",&m1);
	printf("enter marks of 2nd subject:");
	scanf("%d",&m2);
	printf("enter marks of 3rd subject:");
	scanf("%d",&m3);
	sum=m1+m2+m3;
	printf("sum is %d",sum);
	avg=(m1+m2+m3)/3;
	printf("\naverage is %f",avg);
}
