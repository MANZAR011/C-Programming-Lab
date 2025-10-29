#include <stdio.h>
int main() {
    int matrix[3][3];
    int even = 0, odd = 0, positive = 0, negative = 0, zeros = 0;

    printf("Enter elements for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int num = matrix[i][j];

            if (num % 2 == 0)
                even++;
            else
                odd++;

            if (num > 0)
                positive++;
            else if (num < 0)
                negative++;
            else
                zeros++;
        }
    }

    printf("\nMatrix Analysis:\n");
    printf("Even elements: %d\n", even);
    printf("Odd elements: %d\n", odd);
    printf("Positive elements: %d\n", positive);
    printf("Negative elements: %d\n", negative);
    printf("Zeros: %d\n", zeros);

    return 0;
}

