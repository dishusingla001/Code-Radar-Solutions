#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=1;i<=n;i++){
        int space = n-i;
        for(j=1;j<=space;j++){
            printf(" ");
        }

        int formula = i;
        for(k=1;k<=formula;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}