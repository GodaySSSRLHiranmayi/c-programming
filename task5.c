#include<stdio.h>
void main()
{
	int d,n;
	int rev=0;
	printf("enter number:");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	printf("reverse of number is %d",rev);
}
