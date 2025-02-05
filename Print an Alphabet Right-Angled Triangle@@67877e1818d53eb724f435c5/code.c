#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        int formula = i;
        char ch ='A';
        for(j=1;j<=formula;j++){
            printf("%c ",ch);
            ch+=1;
        }
        printf("\n");
    }
    printf("%s", welcome());
    return 0;
}