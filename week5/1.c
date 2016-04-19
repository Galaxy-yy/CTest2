#include<stdio.h>
#include<string.h>

int main(void){
	char n[10];
	int k;
	while(scanf("%s %d", &n, &k) != EOF){
		printf("%d\n", getEnd(n,k));
	}
	return 0;
}

int getEnd(char s[], int m){
	int i = 0;
	while(s[i] != '\0')
		i++;
	//printf("%d", i);
	if(m > i)
		return -1;
	else return s[i-m] - 48;
}

