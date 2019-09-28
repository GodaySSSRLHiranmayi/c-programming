#include<stdio.h>
void main()
{
	float ctemp,ftemp;
	printf("enter temperature in celsius:");
	scanf("%f",&ctemp);
	ftemp=(1.8*ctemp)+32;
	printf("temperature in fahrenheit is: %f",ftemp);
}
