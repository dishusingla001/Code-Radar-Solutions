#include <stdio.h>
int main() {
    int n,i=1,j=1;
    scanf("%d",&n);
    int formula=n-i+1;

    while(i<=n)
    {
        while(j<=formula){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}