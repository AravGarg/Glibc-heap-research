#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

int main(){
	char *p1,*p2;
	for(int i=0;i<7;i++){
		free(calloc(1,0xc0));
	}
	p1=calloc(1,0xc0);
	malloc(0x20);
	p2=calloc(1,0xc0);
	malloc(0x20);
	free(p1);
	free(p2);
	calloc(1,0xc0);
}
