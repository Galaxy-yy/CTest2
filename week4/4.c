#include <stdio.h>

int main() {
    int i,n,a,b,c;
    while(1){
        scanf("%d", &n);
        if(n >= 3){
            a = 0; b = 1;
            for(i=0;i<n;i++){
                c = b; b += a; a = c;
                printf("%10d", a);
                if((i+1)%8 == 0)printf("\n");
            }
            if(i%8 != 0)printf("\n\n");
            else printf("\n");
        }
        else if(n == 0)break;
        else printf("Error!\n\n");
    }
    return 0;
}