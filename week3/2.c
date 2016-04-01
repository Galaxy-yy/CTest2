#include <stdio.h>
#include <limits.h>

int main() {
    int N,i,j,n;
//  printf("Input N:\n");
    scanf("%d", &N);
    unsigned short a,b,mask;
    n = sizeof(unsigned short) * CHAR_BIT;
    for(i=0;i<N;i++){
//      printf("Input a:\n");
        scanf("%hu", &a);
        mask = (a & ~(15 << (n-4))) & ~15;
        b = a << (n-4) | a >> (n-4) | mask;
        printf("%hu\n", b);
    }
    return 0;
}