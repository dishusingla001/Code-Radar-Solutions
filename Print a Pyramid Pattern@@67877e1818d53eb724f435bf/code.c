#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        int formula = i*2-1;
        for(j=1;j<=formula;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}