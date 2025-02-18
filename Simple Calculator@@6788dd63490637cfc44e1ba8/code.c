#include <stdio.h>
int main() {
    int a,b;
    int result;
    char o;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&o);
    switch(o){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
        {
            result=a-b;
            printf("%d",result);
        }
        break;
        case '*':
        {
            if(a!=0 && b!=0){
                result=a*b;
                printf("%d",result);
            }
            else{
                printf("error");
            }
        }
        break;
        case '/':
        {
            if(b!=0){
                result=a/b;
                printf("%d",result);
            }
            else{
                printf("error");
            }
        }
        break;
        default:
            printf("error");
    }
    return 0;
}