#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if('a'<=a<='z'){
        printf("Lowercase");
    }
    else if('A'<=a<='Z')
    {
        printf("Uppercase");
    }
    else {
        printf("Not an alphabet");
    }
}