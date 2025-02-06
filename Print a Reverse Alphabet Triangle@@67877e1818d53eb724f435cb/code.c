#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++){
        int formula=n-i+1;
        char ch='A';
        for(j=1;j<=formula;j++){
            printf("%c",ch)
        }
        printf("\n");
        ch+=1;
    }
    return 0;
}