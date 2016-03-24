#include<stdio.h>

int main(void){
	int a,c;
	while(c = scanf("%d", &a) ==  1){
		if ((a % 3 == 0) && (a % 10 == 5))
			printf("1\n");
		else
			printf("0\n");
}
	return 0;
}
