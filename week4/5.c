#include <stdio.h>

int main() {
    int N,i;
    char d;
    double a,b,c;
    scanf("%d", &N);
    for(i=0;i<N;i++){
        scanf("%lf %lf %c", &a, &b, &d);
        if(d == 43){
            c = a + b;
            printf("%.6f+%.6f=%.6f\n", a,b,c);
        }
        else if(d == 45){
            c = a - b;
            printf("%.6f-%.6f=%.6f\n", a,b,c);
        }
        else if(d == 42){
            c = a * b;
            printf("%.6f*%.6f=%.6f\n", a,b,c);
        }
        else if(d == 47 && b != 0.0){
            c = a / b;
            printf("%.6f/%.6f=%.6f\n", a,b,c);
        }
        else printf("Error！No result.\n");
    }
    return 0;
}