#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char**argv)
{
	unsigned long array[20],nextsize;
	printf("Array start is @ %p.\n",array);
	printf("The goal is to allocate a chunk @ %p.\n",(array+2));
	array[1]=0x60;
	nextsize=strtoul("0x20",NULL,16);
	printf("next size=%lu.\n",nextsize);
	array[13]=nextsize;	
	unsigned long *ptr,*target;
	ptr=array+2;
	free(ptr);
	target=malloc(0x50);
	printf("Returned pointer: %p.\n",target);
}
