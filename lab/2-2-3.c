#include<stdio.h>

int main(void){
	char c;
	scanf("%c", &c);
	if(c >= 65 && c <= 90)
		printf("%c", c+32);
	else printf("%c", c);
	return 0;
}
