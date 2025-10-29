#include <stdio.h>
int main() {
    int n, i, j, k;
    int A[3][3], B[3][3], product[3][3] = {0};

    printf("Enter size of square matrices (2 or 3): ");
    scanf("%d", &n);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            product[i][j] = 0;
            for (k = 0; k < n; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nProduct Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }

    return 0;
}

