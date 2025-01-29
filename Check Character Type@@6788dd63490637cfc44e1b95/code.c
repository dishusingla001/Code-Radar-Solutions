#include <stdio.h>
#include<ctype.h>

int main() {
    char ch;
    scanf("%d",&ch);
    if(isdigit(ch))
    {
        printf("Digit");
    }
    else if(islower(ch) || isupper(ch)){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        printf("Special Character");
    }
    return 0;
}