#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a==b && b==c){
        printf("Equilateral")';
    }
    else if(a==b && b!=c && a==c || a!=b && b==c && a==c || a==c && c!=b)
    {
        printf("Isosceles");
    }
    else if(a!=b && b!=c && a!=c){
        printf("Scalene");
    }
    return 0;
}