#include <stdio.h>
int main() {
    int matrix[3][3], rotated[3][3];

    printf("Enter elements for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rotated[j][2 - i] = matrix[i][j];
        }
    }

    printf("\nRotated Matrix (90° Clockwise):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", rotated[i][j]);
        }
        printf("\n");
    }

    return 0;
}

