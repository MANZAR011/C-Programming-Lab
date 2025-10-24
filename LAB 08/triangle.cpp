#include <stdio.h>

int main() {
//    int arr[3][4] = {
//        {1, 2, 3, 4},
//        {5, 6, 7, 8},
//        {9, 10, 11, 12}
//    };

    int rows;
    int num = 1;
    int E = 0, O = 0;
    int arr[5] = {5, 4, 3, 2, 1};
//    printf("enter the rows: \n");
//    scanf("%d", &rows);
//    int cols = 4;

//    printf("Printing the 2D Array:\n");

    for (int i = 0; i < 5; i++){
        for (int j = i; j < 5; j++) {
        	printf(" ");
        }
        for (int k = 1; k< i; k++) {
        	printf("*");
        }
        printf("\n");
    }
//    for (int i = 5; i < 0; i--){
//        for (int j = i; j > 0; j--) {
//        	printf("");
//        }
//        for (int k = 1; k< 2*(i + 1); k++) {
//        	printf("*");
//        }
//        printf("\n");
//    }

    return 0;
}
//for (int s = 0; s< i-1; s++){
//        		printf("");
//			}
//        	for (int x = 0; x< i-j; x++){
//        		printf("*");
//			}
