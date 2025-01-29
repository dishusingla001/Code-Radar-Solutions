#include <stdio.h>
#include<string.h>

int main() {
    char a;
    scanf("%d",&a);
    if(isdigit(a))
    {
        printf("Digit");
    }
    else if(islower(a)){
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