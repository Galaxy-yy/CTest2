#include <stdio.h>
#define PI 3.1415926

int main() {
    int N,i;
//  printf("Input N:\n");
    scanf("%d", &N);
    float r,h,s1,s2;

    for(i=0;i<N;i++){
//      printf("Input r,h:\n");
        scanf("%f %f", &r, &h);
        s1 = 2*PI*(r*r + r*h);
        s2 = PI*r*r*h;
        printf("%.6f %.6f\n", s1, s2);
    }

    return 0;
}