#include <stdio.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int formula=i;
        for(j=1;j<=formula;j++){
            if(i%2==0 && j%2==0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
    }
    printf("%s", welcome());
    return 0;
}