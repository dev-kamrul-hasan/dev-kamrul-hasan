#include <stdio.h>

int main() {
    // ==========================================
    // TOPIC: LOOPS (FOR LOOP)
    // ==========================================
    // Print numbers from 1 to 10
    printf("--- FOR LOOP (1 to 10) ---\n");
    int i;
    for (i = 1; i < 11; ++i) {
        printf("%d ", i);
    }
    printf("\n\n");


    // ==========================================
    // TOPIC: LOOPS (WHILE LOOP)
    // ==========================================
    // Print numbers from 1 to 10
    printf("--- WHILE LOOP (1 to 10) ---\n");
    int j = 1;
    while (j <= 10) {
        printf("%d\n", j);
        ++j;
    }
    printf("\n");


    // ==========================================
    // TOPIC: LOOPS (DO-WHILE LOOP)
    // ==========================================
    // Program to add numbers until the user enters zero
    printf("--- DO-WHILE LOOP (Summing) ---\n");
    double number, sum = 0;

    // The body of the loop is executed at least once
    do {
        printf("Enter a number (0 to exit): ");
        scanf("%lf", &number);
        sum += number;
    } while(number != 0.0);

    printf("Final Sum = %.2lf\n", sum);

    return 0;
}
