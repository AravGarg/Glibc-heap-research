#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int d;
	while(1){d=getchar();
	getchar();
	printf("%d\n",d);
	if(d==49){
	char *a=malloc(0x8);
	char *b=malloc(0x8);
	char *c=malloc(0x8);
	
	printf("first chunk @ %p.\n",a);
	printf("Second chunk @ %p.\n",b);
	printf("Third chunk @ %p.\n",c);

	free(a);
	free(b);
	free(a);

	printf("After double free\n");
	
	char *d=malloc(0x8);
	char *e=malloc(0x8);
	char *f=malloc(0x8);


	printf("first chunk @ %p.\n",d);
	printf("Second chunk @ %p.\n",e);
	printf("Fourth chunk @ %p.\n",f);}
	
	else{break;}}
	
}
