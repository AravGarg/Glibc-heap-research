#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	unsigned long *p0,*p1;
	p0=malloc(0x30);
	p1=malloc(0x30);
	free(p0);
	sleep(10);
}
