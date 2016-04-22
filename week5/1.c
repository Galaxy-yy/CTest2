#include<stdio.h>

int getEnd(unsigned long int a, int m);

int main(void){
	unsigned long int n;
	int k;
	while(scanf("%lu %d", &n, &k) != EOF){
		printf("%d\n", getEnd(n,k));
	}
	return 0;
}

int getEnd(unsigned long int a, int m){
	int length = 0;
	int s[10];
	int i = 0;
	while(a != 0){
		s[i] = a % 10;
		a /= 10;
		length++;
		i++;
	}
	if(length < m)
		return -1;
	else return s[m-1];
}

