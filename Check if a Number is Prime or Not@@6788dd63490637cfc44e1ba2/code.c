#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int c=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            c=1;
            printf("Not Prime");
        }
    }
    if(c==1){
        printf("Prime");
    }
    return 0;
}