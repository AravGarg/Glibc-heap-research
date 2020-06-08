#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int main()
{	
	unsigned long long d[3];
	unsigned long long *p0,*p1,*p2,*p3;
	p0=malloc(0x8);
	p1=malloc(0x8);
	p2=malloc(0x8);

	free(p0);
	free(p1);
	free(p0);

	d[0]=0x10000;
	d[1]=0x20;
	d[2]=0x0;
	*p0=d;

	malloc(0x8);
	p3=malloc(0x8);

	printf("p3 @ %p\n",p3);
}
