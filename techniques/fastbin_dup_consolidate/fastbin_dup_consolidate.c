#include<unistd.h>
#include<stdint.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	unsigned long *p0,*p1,*p2;
	p0=malloc(0x40);
	p1=malloc(0x40);	
	free(p0);
	p2=malloc(0x400);
	free(p0);
	
	
}
