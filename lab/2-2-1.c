#include<stdio.h>
#define PI 3.14159

int main(void){
	int f;
	short p,k;
	double c,r,s;
	/*for task1*/
	printf("Input  Fahrenheit:");
	scanf("%d", &f);
	c = (f - 32) * 5.0 / 9;
	printf("\n%d(F)=%.2f(C)\n\n", f, c);
	/*for task2*/
	printf("input the radius r:");
	scanf("%lf", &r);
	s = PI * r * r;
	printf("\nThe acreage is%.2f\n\n", s);
	/*for task3*/
	printf("input hex int k,p:");
	scanf("%x %x", &k, &p);
	int newint = (p&0xff00)|(k >> 8 & 0x00ff);
	printf("newint=%x\n\n", newint);
	return 0;
}
