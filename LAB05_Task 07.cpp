#include <stdio.h>
int main() {
    int a, b;
    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    printf("Sum of a and b: %d\n", a + b);
    printf("Difference between a and b: %d\n", a - b);
    printf("Product of a and b: %d\n", a * b);
    if (b != 0) {
        printf("Quotient of a divided by b: %d\n", a / b);
        printf("Remainder when a is divided by b: %d\n", a % b);
    }
	else {printf("Cannot perform division or modulo operation with a divisor of zero.\n");}
    return 0;
}
