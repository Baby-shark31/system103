#include <stdio.h>


int main() {

    int dayOfWeek;

    printf("Enter a number (1-7) for the day of the week: ");
    scanf("%d", &dayOfWeek);

    if(dayOfWeek == 1) {
        printf("It is Monday");
    }
    else if(dayOfWeek == 2) {
        printf("It is Tuesday");
    }
    else if(dayOfWeek == 3) {
        printf("It is Wednesday");
    }
    else if(dayOfWeek == 4) {
        printf("It is Thursday");
    }
    else if(dayOfWeek == 5) {
        printf("It is Friday");
    }
    else if(dayOfWeek == 6) {
        printf("It is Saturday");
    }
    else if(dayOfWeek == 7) {
        printf("It is Sunday");
    }
    else {
        printf("Invalid input. Please enter a number between 1 and 7.");
    }

    return 0;
}