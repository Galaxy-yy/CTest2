#include<stdio.h>

enum mouth { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main(void){
	enum mouth mou;
	char *name[] = {"January", "February", "March", "April", "May", "June",
                     "July", "August", "September", "October", "November",
                     "December"};
	int day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int y;
//	printf("Input year:");
	scanf("%d", &y);
	if((y % 4 == 0 && y % 100 !=0) || (y % 400 == 0)) day[1]++;
	for(mou=JAN; mou<=DEC; mou++)
		printf("%s,%d\n", name[mou], day[mou]);
	return 0;
}
