#include <stdio.h>
int main() {
    float a,b;
    float result;
    char o;
    scanf("%d %d",&a,&b);
    scanf("%c",&o);
    switch(o){
        case '+':
        {
            result=a+b;
            printf(result);
            break;
        }
        case '-':
        {
            result=a-b;
            printf(result);
            break;
        }
        case '*':
        {
            if(a!=0 && b!=0){
                result=a*b;
                printf(result);
            }
            else{
                printf("error");
            }
            break;
        }
        case '/':
        {
            if(b!=0){
                result=a/b;
                printf(result);
            }
            else{
                printf("error");
            }
            break;
        }
        default:
            printf("error");
    }
    return 0;
}