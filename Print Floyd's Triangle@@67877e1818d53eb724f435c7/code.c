#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,j,z=1;
    for(i=1;i<=n;i++){
        int formula=i;
        for(j=1;j<=formula;j++){
            printf("%d ",z);
            z+=1;
        }
        printf("\n");
    }
    return 0;
}