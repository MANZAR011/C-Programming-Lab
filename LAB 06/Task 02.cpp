#include <stdio.h>
int main() {
    int n;
    int count = 0, sum = 0;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    if (n < 2) {
        printf("There are no prime numbers less than or equal to %d.\n", n);
        printf("Number of primes: 0\n");
        printf("Sum of primes: 0\n");
        return 0;
    }

    printf("Prime numbers less than or equal to %d are: ", n);
    for (int i = 2; i <= n; i++) {
        int is_prime = 1; 

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%d ", i);
            count++;
            sum += i;
        }
    }
    printf("\n");
    printf("Number of primes up to %d: %d\n", n, count);
    printf("Sum of primes up to %d: %lld\n", n, sum);
    return 0;
}
