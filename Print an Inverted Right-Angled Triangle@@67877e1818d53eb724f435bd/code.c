#include <stdio.h>
int main() {
    int n,i=1;
    scanf("%d",&n);
    int formula;

    while(i<=n)
    {
        int j=1;
        formula=n-i+1;
        while(j<=formula){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}