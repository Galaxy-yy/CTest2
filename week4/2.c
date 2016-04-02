#include <stdio.h>

int main() {
    int n,i;

    while(1){
        scanf("%d", &n);
        if(n > 0){
            int s1 = 1, s2 = 0;
            for(i=1;i<=n;i++){
                s1 *= i;
                s2 += s1;
            }
            printf("%d\n", s2);
        }
        else if(n == 0)break;
        else printf("Error!\n");
    }
    return 0;
}