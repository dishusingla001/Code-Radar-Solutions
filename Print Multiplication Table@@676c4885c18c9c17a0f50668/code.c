#include <stdio.h>
int main() {
    int n,i,table;
    scanf("%d",&n);
    for(i=1;i<11;i++){
        table=n*i;
        printf("%d x %d = %d\n",n,i,table);
    }
    return 0;
}