#include <stdio.h>
#include <stdbool.h>

int main() {
    int intType = 2;          
    float floatType = 3.22;   
    double doubleType = 23.424; 
    char charType = 'A';      
    bool boolType = false;    

    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu bytes\n", sizeof(charType));
    printf("Size of bool: %zu bytes\n", sizeof(boolType));

    return 0;
}
