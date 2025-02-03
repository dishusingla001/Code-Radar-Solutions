#include <stdio.h>
int main() {
    char grade;
    scanf("%c",&grade);
    switch(grade){
        case A:
            printf("Exellent");
            break;
        case B:
            printf("Good");
            break;
        case C:
            printf("Average");
            break;
        case D:
            printf("Below Average");
            break;
        case F:
            printf("Fail");
            break;
        default:
            printf("Invalid grade");
            
    }
    printf("%s", welcome());
    return 0;
}