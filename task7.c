#include<stdio.h>
void main()
{
	int rem,r=0,temp,n;
	printf("enter number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		r=r*10+rem;
		n=n/10;
	}
	if(r==temp)
	printf("it is a palindrome number");
	else
	printf("it is not a palindrome number");
}
