#include <stdio.h>
int main() {
    float a,b,result;
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
            if(a!=0 || b!=0){
                result=a*b;
                printf(result);
            }
            else{
                printf("Error");
            }
        }
        break;
        case '/':
        {
            if(b!=0){
                result=a/b;
                printf(result);
            }
            else{
                printf("Error");
            }
        }
        break;
    }
    return 0;
}