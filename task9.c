#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("enter number:");
	scanf("%d",&n);
	if(n==0)
	{
		return 1;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		printf("factorial of number is %d",fact);
	}
	return 0;
}
