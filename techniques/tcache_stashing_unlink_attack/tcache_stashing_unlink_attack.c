#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
static u_int64_t victim = 0;
int main(){
	setbuf(stdout, 0);
	setbuf(stderr, 0);
	setbuf(stdin, 0);
	char *t1;
	char *s1, *s2, *pad;
	char *tmp;
	for(int i=0; i<6; i++){
		t1 = calloc(1, 0x50);
		free(t1);
	}
	s1 = malloc(0x420);
	pad = malloc(0x20);
	free(s1);
	malloc(0x3c0);
	malloc(0x100);
	s2 = malloc(0x420);
	pad = malloc(0x80);
	free(s2);
	malloc(0x3c0);
	malloc(0x100);
	*(u_int64_t*)((s2+0x3c0)+0x18) = (u_int64_t)(&victim)-0x10;
	calloc(1, 0x50);
}
