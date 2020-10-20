#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main(){
	setbuf(stdout,0);
	setbuf(stdin,0);
	setbuf(stderr,0);
	void *p[3];
	void *t[7];
	for(int i=0;i<7;i++){
		t[i]=malloc(0x10);
	}
	for(int i=0;i<2;i++){
		p[i]=malloc(0x10);
	}
	for(int i=0;i<7;i++){
		free(t[i]);
		t[i]=0;
	}
	free(p[0]);
	free(p[1]);
	free(p[0]);
}
