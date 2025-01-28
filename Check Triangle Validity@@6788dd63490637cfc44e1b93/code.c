#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a+b)>c && (a+c)>b && (c+b)>a)
    {
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}