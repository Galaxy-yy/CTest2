#include <stdio.h>
#include <string.h>

int main() {
    int N,i,j,k;
//  printf("Input N:");
    scanf("%d", &N);
    getchar();
    char s[100];
    for(i=0;i<N;i++){
        fgets(s,100,stdin);
        j=strlen(s);
        for(k=0;k<j;k++){
            if(s[k]==' ' && s[k+1]==' ')
            continue;
            else putchar(s[k]);
        }
    }
    return 0;
}