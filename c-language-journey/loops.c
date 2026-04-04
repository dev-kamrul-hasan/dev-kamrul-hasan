#include <stdio.h>

int main() {
    // For Loop
    printf("For Loop (1-10): ");
    for (int i = 1; i <= 10; ++i) {
        printf("%d ", i);
    }

    // While Loop
    printf("\nWhile Loop (1-10): \n");
    int j = 1;
    while (j <= 10) {
        printf("%d\n", j);
        ++j;
    }

    return 0;
}
