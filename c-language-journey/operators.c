#include <stdio.h>

int main() {
    int a = 9, b = 6;
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);   
    printf("Remainder (Modulus): %d\n", a % b);

    int x = 10;
    printf("Original: %d, Pre-incremented: %d\n", x, ++x);

    int total = 5;
    total += 5; 
    total *= 2; 
    printf("Final Compound Value: %d\n", total);

    return 0;
}
