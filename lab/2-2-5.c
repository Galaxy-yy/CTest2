#include<stdio.h>

int main(void){
	unsigned long ip;
	int a,b,c,d;
	printf("Input ip:");
	scanf("%lu", &ip);
	a = ip & 0x000000ff;
	b = ip >> 8 & 0x000000ff;
	c = ip >> 16 & 0x000000ff;
	d = ip >> 24 & 0x000000ff;
	printf("%d.%d.%d.%d\n", a, b, c, d);
	return 0;
}
