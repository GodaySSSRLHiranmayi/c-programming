#include<stdio.h>
int main()
{
	int i,c,f;
	do
	{
	printf("choose a case\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			printf("enter temperature in celsius:");
			scanf("%d",&c);
			f=32+1.8*c;
			printf("temperature in fahrenheit is: %d\n",f);
			break;
			case 2:
				printf("enter temperature in fahrenheit:");
				scanf("%d",&f);
				c=(f-32)*5/9;
				printf("temperature in celsius is: %d\n",c);
				break;
				case 3:
					printf("exit");
					break;
		}
	}
	while(i!=3);
	return 0;
}
