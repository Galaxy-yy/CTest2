#include<stdio.h>
#include<limits.h>

void PrintBit (int x){
	int i;
	int n=sizeof(int) * CHAR_BIT;
	int mask = 1 << (n-1);
	for(i=1; i<=n; ++i){
		putchar(!(x & mask)?'0':'1');
		x <<= 1;
		if(!(i % CHAR_BIT) && i<n) putchar(' ');

}}

int main(void){
	int x,p,n;
//	printf("Input x,p,n:");
	scanf("%d %d %d", &x, &p, &n);
	PrintBit(x);
	printf("\n");
	unsigned k = 0xFFFFFFFF;
	int mask = (k << n) & (k >> (32-p));
	PrintBit(x^mask);
	printf("\n");
	return 0;
}
