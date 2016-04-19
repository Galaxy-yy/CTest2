#include<stdio.h>

int main(void){
	unsigned short x,m,n;
	printf("Input x,m,n:");
	scanf("%hx %hu %hu", &x, &m, &n);
	printf("%hx\n", (x << (16m-n)) & (0xffff << (16-n)));
	return 0;
}
