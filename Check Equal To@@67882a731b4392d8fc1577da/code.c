#include <stdio.h>
int main() {
    int a,b;
    scnaf("%d",&a);
    scanf("%d",&b);
    if(a==b){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}