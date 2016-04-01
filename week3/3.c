#include <stdio.h>
#include <limits.h>

int main() {
    int N,i,n;
    printf("Input N:\n");
    scanf("%d", &N);
    unsigned short a,b,c;
    n = sizeof(unsigned short) * CHAR_BIT;
    for(i=0;i<N;i++){
        printf("Input a:\n");
        scanf("%hu", &a);
        b = a >> (n/2);
        c = a & ((1 <<(n/2)) - 1);
        printf("%c,%c\n", b, c);
    }
    return 0;
}