#include<unistd.h>
#include<stdint.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	unsigned long *p0,*p1,*p2;
	p0=malloc(0x28);
	p1=malloc(0xfa0);	
	free(p0);
	p2=malloc(0x61a80);
	free(p0);
	
	
}
