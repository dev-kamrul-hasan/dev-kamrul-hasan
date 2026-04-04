#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("Is a equal to b? %d\n", a == b);
    printf("Is a not equal to b? %d\n", a != b);

    if (a < 10 && b > 5) {
        printf("Both conditions are True!\n");
    }

    return 0;
}
