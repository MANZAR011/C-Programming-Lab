#include <stdio.h>
int main() {
    int a, b;
    printf("Enter the first integer (a): ");
    scanf("%d", &a);
    printf("Enter the second integer (b): ");
    scanf("%d", &b);

    printf("\nBitwise Operations Results:\n");
    printf("a & b (Bitwise AND): %d\n", a & b);
    printf("a | b (Bitwise OR): %d\n", a | b);
    printf("a ^ b (Bitwise XOR): %d\n", a ^ b);
    printf("~a (Bitwise NOT): %d\n", ~a);
    printf("a << 1 (Shift left): %d\n", a << 1);
    printf("a >> 1 (Shift right): %d\n", a >> 1);

    return 0;
}
