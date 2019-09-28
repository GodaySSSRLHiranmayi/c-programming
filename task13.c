#include<stdio.h>
void main()
{
	int A[10],i,n,small,large;
	printf("size is:");
	scanf("%d",&n);
	printf("enter the array:");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	large=small=A[0];
	for(i=1;i<n;i++)
	{
		if(A[i]>large)
		large=A[i];
		if(A[i]<small)
		small=A[i];
	}
	printf("the largest element is: %d",large);
	printf("\nthe smallest element is: %d",small);
}
