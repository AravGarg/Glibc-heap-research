#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	setbuf(stdout,NULL);//make printf quiet
	unsigned long *p0,*p1;
	p0=malloc(0x500);
	p1=malloc(0x500);
	malloc(0x10);//Avoid consolidation
	printf("Intial heap data.\n");
	printf("p0 @ %p\n",p0);
	printf("p0 prev size = %p\n",p0[-2]);
	printf("p0 size = %p\n",p0[-1]);
	printf("p0 forward pointer = %p\n",*p0);
	printf("p0 back pointer = %p\n",p0[1]);
	printf("p0 forward next size pointer = %p\n",p0[2]);
	printf("p0 backword next size pointer = %p\n",p0[3]);
	printf("\n\n.");	
	printf("p1 @ %p\n",p1);
	printf("p1 prev size = %p\n",p1[-2]);
	printf("p1 size = %p\n",p1[-1]);
	printf("p1 forward pointer = %p\n",*p1);
	printf("p1 back pointer = %p\n",p1[1]);
	printf("p1 forward next size pointer = %p\n",p1[2]);
	printf("p1 backword next size pointer = %p\n",p1[3]);
	printf("\n\n.");	
	printf("Free p0 and p1\n");
	free(p0);
	free(p1);
	printf("p0 prev size = %p\n",p0[-2]);
	printf("p0 size = %p\n",p0[-1]);
	printf("p0 forward pointer = %p\n",*p0);
	printf("p0 back pointer = %p\n",p0[1]);
	printf("p0 forward next size pointer = %p\n",p0[2]);
	printf("p0 backword next size pointer = %p\n",p0[3]);
	printf("\n\n.");	
	printf("p1 @ %p\n",p1[0]);
	printf("p1 prev size = %p\n",p1[-2]);
	printf("p1 size = %p\n",p1[-1]);
	printf("p1 forward pointer = %p\n",*p1);
	printf("p1 back pointer = %p\n",p1[1]);
	printf("p1 forward next size pointer = %p\n",p1[2]);
	printf("p1 backword next size pointer = %p\n",p1[3]);
	printf("\n\n.");	
}
