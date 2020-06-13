#include<stdio.h>
#include<sys/mman.h>

int main()
{
	char *mmaped=NULL;
	mmaped=mmap(NULL,1024,7,MAP_PRIVATE|MAP_ANONYMOUS,0,0);
	printf("%p\n",mmaped);
}
