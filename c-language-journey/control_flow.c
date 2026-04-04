#include <stdio.h>

int main() {
    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

    if (number > 25) {
        printf("The number is greater than 25.\n");
    } 
    else if (number > 0) {
        printf("The number is positive (1 to 25).\n");
    } 
    else if (number < 0) {
        printf("The number is negative.\n");
    } 
    else {
        printf("The number is zero.\n");
    }

    return 0;
}
