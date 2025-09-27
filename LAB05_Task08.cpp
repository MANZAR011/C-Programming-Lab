#include <stdio.h>
int main() {
    int a, b;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);

    printf("\nComparison Results:\n");
    printf("a == b: %d\n", a == b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a != b: %d\n", a != b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    return 0;
}
