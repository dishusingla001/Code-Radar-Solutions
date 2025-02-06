#include <stdio.h>

int main() {
    int n;
    int i,j,s;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        int space = n-i;
        for(s=1;s<=space;s++){
            printf(" ");
        }

        int formula=i;
        for(j=1;j<=formula;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}