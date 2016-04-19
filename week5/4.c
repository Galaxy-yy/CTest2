#include<stdio.h>

double getSum(int a){
	double s = 0;
	int i;
	int j = 1;
	for(i=1;i<=a;i++){
		j *= i;
		s += 1.0/j;
	}
	return s;
}

int main(void){
	int n;
	int k = 1;
	while(k = scanf("%d", &n)){
		if(n < 0){
			printf("Error!\n");
			continue;
		}
		else if(n == 0)
			break;
		printf("s = %.8lf\n", getSum(n));
	}
	return 0;
}

