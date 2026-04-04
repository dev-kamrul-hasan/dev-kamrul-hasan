// calculator v0.1

#include <stdio.h>

int main()
{
    char operation, enterIsPressed;
    double n1, n2;
    
    Jump:
    printf("Enter an operator: (+, -, *, /,) = ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);

    switch(operation)
    {
        case '+':
        printf("%.1lf + %.1lf = %.1lf",n1 ,n2, n1+n2);
        break;

        case '-':
        printf("%.1lf - %.1lf = %.1lf",n1 ,n2, n1-n2);
        break;
        
        case '*':
        printf("%.1lf * %.1lf = %.1lf",n1 ,n2, n1*n2);
        break;

        case '/':
        printf("%.1lf / %.1lf = %.1lf",n1 ,n2, n1/n2);
        break;

    // Error: prompt user to try again
        default:
        printf("Error! operator is not correct, Try Again.\n");
        scanf("%c", &enterIsPressed); // Consume "Enter" Key
        goto Jump;
    }


    return 0;
}
