#include<stdio.h>
#include<unistd.h>

int main()
{
	char *pb;
	pb=(char *)sbrk(0);
	printf("Intially program break @ %p\n",pb);
	brk(pb+0x1000);
	printf("Program break @ %p\n",(char *)sbrk(0));
	brk((void *)((char *)pb+0x5000));
	printf("Program break @ %p\n",sbrk(0));
	return 0;
}
