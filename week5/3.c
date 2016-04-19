#include<stdio.h>

int main(void){
	int a,b,n;
	scanf("%d", &n);
	int i,sum;
	for(i=0;i<n;i++){
		scanf("%d %d", &a, &b);
		sum = getSum(a) + getSum(b);
		int k = 1;
		switch(sum){
			case 2:
			case 3:
			case 12:
				printf("fail!\n");
				k = 0;
				break;
			case 7:
			case 11:
				printf("success!\n");
				k = 0;
				break;
			default:
				k = sum;
		}
		while(k){
			a++; b++;
			sum = getSum(a) + getSum(b);
			if(sum == 7){
				printf("fail!\n");
				k = 0;
			}
			else if(sum == k){
				printf("success!\n");
				k = 0;
			}
		}
	}
	return 0;
}

int getSum(int s){
	int sum = 0;
	while(s > 0){
		sum += s % 10;
		s = s / 10;
	}
	if((sum + 1) % 6 == 0)
		return 6;
	else return (sum + 1) % 6;
}

