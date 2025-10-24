// Lab task 02
#include <stdio.h>

int main() {
    int rows = 5;
        for (int i = 0; i < 5; i++){
        for (int j = i; j < 5; j++) {
        	printf(" ");
        }
        for (int k = 1; k < i; k++) {
        	printf("*");
        }
        printf("\n");
    }


    return 0;
}

