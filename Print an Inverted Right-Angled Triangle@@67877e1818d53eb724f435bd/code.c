// #include <stdio.h>
// int main() {
//     int n,i,j;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         int formula = n-i+1;
//         for(j=1;j<=formula;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter Number=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int formula = n-i;
        for(j=0;j<formula;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}