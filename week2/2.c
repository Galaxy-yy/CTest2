#include<stdio.h>
#include<limits.h>

void RightShift(int x, int n){
	int b = sizeof(int) * CHAR_BIT;
	int i;
	for(i=1; i<=n; i++){
		if((x & 1) == 1)
			x = (x >> 1) | (1 << (b-1));
		else
			x = (x >> 1) & 0x7FFFFFFF;
}
	printf("%d\n", x);
}

int main(void){
//	printf("Input x,n:");
	int x,n;
	scanf("%d %d", &x, &n);
	RightShift(x,n);
	return 0;
}
