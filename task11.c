#include<stdio.h>
struct book
{
	char title[100];
	char author[100];
	char genre[100];
};
int main()
{
	struct book b1;
	printf("enter title of the book:");
	scanf("%s",b1.title);
	printf("enter author name of the book:");
	scanf("%s",b1.author);
	printf("enter genre of the book:");
	scanf("%s",b1.genre);
	printf("title:%s\n",b1.title);
	printf("author:%s\n",b1.author);
	printf("genre:%s\n",b1.genre);
	return 0;
}
