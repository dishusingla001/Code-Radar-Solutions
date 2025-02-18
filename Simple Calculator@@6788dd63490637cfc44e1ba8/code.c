#include <stdio.h>
int main() {
    int a,b;
    float result;
    char o;
    scanf("%d %d",&a,&b);
    scanf("%c",&o);
    switch(o){
        case '+':
            result=a+b;
            printf("%f",result);
        break;
        case '-':
        {
            result=a-b;
            printf("%f",result);
        }
        break;
        case '*':
        {
            if(a!=0 && b!=0){
                result=a*b;
                printf("%f",result);
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
                printf("%f",result);
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