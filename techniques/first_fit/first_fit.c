#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *a=malloc(0x600);
	char *b=malloc(0x300);
	strcpy(a,"This is A!");
	printf("First chunk @ %p = %s\n",a,a);
	printf("Second chunk @ %p = %s\n",b,b);
	printf("Now free a");
	free(a);
	char *c=malloc(0x500);
	strcpy(c,"This is C");
	printf("Third chunk @ %p = %s\n",c,c);
}
