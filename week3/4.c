#include <stdio.h>

int main() {
    int N,i;
//  printf("Input N:\n");
    scanf("%d", &N);
    char a;
    for(i=0;i<N;i++){
 //     printf("Input a:\n");
        getchar();//fuck char!!!
        scanf("%c", &a);
        if(a>=97 && a<=103)
            printf("%d\n", a-87);
        else if(a>=65 && a<=70)
            printf("%d\n", a-55);
        else if(a>=48 && a<=57)
            printf("%d\n", a-48);
        else printf("%d\n", a);
    }
    return 0;
}