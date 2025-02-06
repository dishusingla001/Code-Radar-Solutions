#include <stdio.h>
int main() {
    int n,i,j;
    char ch='A';
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int formula=i;
        for(j=1;j<=formula;j++){
            printf("%c",ch);
            ch+=1;
        }
    }
    return 0;
}