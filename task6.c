#include<stdio.h>
void main()
{
	int n,r,t,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(t==sum)
	printf("it is a amstrong number");
	else
	printf("it is not a amstrong number");
}
