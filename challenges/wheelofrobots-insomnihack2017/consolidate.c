#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()

{	
	unsigned long *p0,*p1,*p2;
	p0=malloc(0x40);
	p1=malloc(0x40);
	free(p0);
	p2=malloc(0x940);
	
}
