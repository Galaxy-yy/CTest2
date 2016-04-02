#include <stdio.h>

int main() {
    int a,b,c,d,i;
    while(1){
        scanf("%d %d", &a, &b);
        if(a==0 || b==0)break;
        if(a>b){
            c=b;b=a;a=c;
        }
        for(i=1;i<=b;i++){
            if((a%i == 0) && (b%i == 0))c=i;
        }
        d=a*b/c;
        printf("%d %d\n", c, d);
    }
    return 0;
}