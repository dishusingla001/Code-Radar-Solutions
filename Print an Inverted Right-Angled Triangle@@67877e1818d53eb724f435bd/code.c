#include <stdio.h>
int main() {
    int n,i=1,j=1;
    scanf("%d",&n);
    int formula;

    while(i<=n)
    {
        formula=n-i+1;
        while(j<=formula){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}