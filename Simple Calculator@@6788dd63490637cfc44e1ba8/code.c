#include <stdio.h>
int main() {
    float a,b,result;
    char o;
    scanf("%d %d",&a,&b);
    scanf("%c",&o);
    switch(o){
        case '+':
            result=a+b;
            break;
        case '-':
            result=a-b;
            break;
        case '*':
        {
            if(a!=0 && b!=0){
                result=a*b;
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
            }
            else{
                printf("Error");
            }
        }
        break;
    }
    printf(result);
    return 0;
}