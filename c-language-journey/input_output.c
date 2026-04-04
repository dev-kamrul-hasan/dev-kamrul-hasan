#include <stdio.h>

int main() {
    int num;
    float num2;
    double num3;
    char name;

    printf("Enter Integer Number: ");
    scanf("%d", &num);

    printf("Enter Float Number: ");
    scanf("%f", &num2);

    printf("Enter Double Number: ");
    scanf("%lf", &num3); 

    printf("Enter Character: ");
    scanf(" %c", &name);

    printf("\n--- Results ---\n");
    printf("Integer: %d\n", num);
    printf("Float: %f\n", num2);
    printf("Double: %lf\n", num3);
    printf("Character: %c\n", name);

    return 0;
}
