#include <stdio.h>
int main() {
    int n,days;
    scanf("%d",&n);
    if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12){
        days = 31;
    }
    else if(n==4 || n==6 || n==9 || n==11){
        days =30;
    }
    else if(n==2){
        days = 28;
    }
    else {
        printf("Invalid month");
    }

    printf("%d",days);
    return 0;
}