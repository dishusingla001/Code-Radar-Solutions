#include <stdio.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        int space = n-i;
        for(j=1;j<=space;j++){
            printf(" ");
        }
        int formula = i;
        for(k=1;k<=formula;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}