#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,z=1,j;

    for(i=1;i<=n;i++){
        int formula = n-i+1;
        z=1;
        for(j=1;j<=formula;j++){
            printf("%d ",z);
            z+=1;
        }
    }
    return 0;
}