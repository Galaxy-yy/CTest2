#include <stdio.h>

int main() {
    int N,i;
    scanf("%d", &N);
    float a,b,c;
    for(i=0;i<N;i++){
        scanf("%f %f %f", &a, &b, &c);
//      printf("%.1f\n" , a>b?((b>c)?b:c):((b>c)?c:b));
        if(a>b){
            if(b>c)printf("B:%.1f\n", b);
            else if(a>c)printf("C:%.1f\n", c);
            else printf("A:%.1f\n", a);
        }
        else{
            if(b<c)printf("B:%.1f\n", b);
            else if(a<c)printf("C:%.1f\n", c);
            else printf("A:%.1f\n", a);
        }
    }
    return 0;
}