#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=1;i<=n;i++){
        int space = n-i;
        for(i=1;i<=space;i++){
            printf(" ");
        }

        int formula1=i;
        for(j=1;j<=formula1;j++){
            printf("%d",formula1);
        }

        int formula2=i-1;
        int extra = i;
        for(k=1;k<=formula2;k++){
            printf("%d",extra);
            extra-=1;
        }
        printf("\n");
    }
    return 0;
}