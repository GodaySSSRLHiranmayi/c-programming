#include<stdio.h>
#include<string.h>
void main()
{
	char s1[10],s2[10];
	printf("enter string1");
	gets(s1);
	printf("enter string2");
	gets(s2);
	strcat(s1,s2);
    printf("string formed is: %s",s1);	
}
