#include<stdio.h>
#include<sys/mman.h>

int main()
{
	char *mmaped=NULL;
	mmaped=mmap(NULL,(size_t)132*1024,PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);
	printf("%p\n",mmaped);
}
