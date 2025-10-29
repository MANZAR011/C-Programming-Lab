#include <stdio.h>
int main() {
    int matrix[3][3];
    int isUpper = 1, isLower = 1;

    printf("Enter elements for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i > j && matrix[i][j] != 0)
                isUpper = 0;
            if (i < j && matrix[i][j] != 0)
                isLower = 0;
        }
    }

    if (isUpper && !isLower)
        printf("\nThe matrix is an Upper Triangular Matrix.\n");
    else if (isLower && !isUpper)
        printf("\nThe matrix is a Lower Triangular Matrix.\n");
    else if (isUpper && isLower)
        printf("\nThe matrix is a Diagonal Matrix (both upper and lower triangular).\n");
    else
        printf("\nThe matrix is Neither Upper nor Lower Triangular.\n");

    return 0;
}

