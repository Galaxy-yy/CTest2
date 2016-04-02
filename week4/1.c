#include <stdio.h>

int main() {
    int N,i;
//  printf("Input N:");
    scanf("%d", &N);
    int a,b='\n';
    getchar();
    for(i=0;i<N;i++){
//      printf("Input sentences:");
        while((a=getchar()) != '\n'){
            if(a == ' ')
                if(b != ' ')
                    putchar(a);
            if(a != ' ')
                putchar(a);
            b = a;
        }
        printf("\n");
    }
    return 0;
}