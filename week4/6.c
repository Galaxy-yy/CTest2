#include <stdio.h>

int main() {
    int N,i,j,a,b,c,d;
    int y[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d", &N);
    for(i=0;i<N;i++){
        scanf("%d %d %d", &a, &b, &c);
        a,b,c,d = 0;
        if((a%4 == 0 && a%100 != 0) || (a%400 == 0)){
            if(b > 2){
                for(j=0;j<b-1;j++){
                    d += y[j];
                }
                d += c + 1;
                printf("%d\n", d);
            }
            else{d = 31*(b-1) + c;
                printf("%d\n", d);
            }
        }
        else{
            if(b > 2){
                for(j=0;j<b-1;j++){
                    d += y[j];
                }
                d += c;
                printf("%d\n", d);
            }
                else{d = 31*(b-1) + c;
                    printf("%d\n", d);
                }
        }
    }
    return 0;
}