#include <stdio.h>

int main() {
    int n,i;
    while(scanf("%d", &n)){
        if(n<=0){
            if(n<0)printf("Error!\n");
        break;}
        int s1 = 1, s2 = 0;
        for(i=1;i<=n;i++){
            s1 *= i;
            s2 += s1;
        }
        printf("%d\n", s2);
    }
    return 0;
}