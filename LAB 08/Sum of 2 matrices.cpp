// Lab array task
#include <stdio.h>
int main(){
	int arr_1[3][3];
	int arr_2[3][3];
	int arr_3[3][3];

	int sum= 0, largest = 0, smallest = 1000000, largest_sum = 0, row;
	printf("For the first matrix: \n");
	for(int i = 0; i< 3; i++){
		for(int j = 0; j< 3; j++){
			printf("Enter the value for row %d, column %d: ", i+1, j+1);
			scanf("%d", &arr_1[i][j]);
		}
	}
for(int i = 0; i< 3; i++){
	sum = 0;
	for(int j = 0; j<3; j++){
		printf("%d ", arr_1[i][j]);
//		sum = sum+ arr_1[i][j];
	}
	printf("\n");	
	}
	
	
printf("For the Second matrix: \n");
	for(int i = 0; i< 3; i++){
		for(int j = 0; j< 3; j++){
			printf("Enter the value for row %d, column %d: ", i+1, j+1);
			scanf("%d", &arr_2[i][j]);
		}
	}
for(int i = 0; i< 3; i++){
	sum = 0;
	for(int j = 0; j<3; j++){
		printf("%d ", arr_2[i][j]);
//		sum = sum+ arr_2[i][j];
	}
	printf("\n");	
	}

printf("\n\nThe resultant matrix: \n");
for(int i = 0; i< 3; i++){
		for(int j = 0; j< 3; j++){
			arr_3[i][j] = arr_1[i][j] + arr_2[i][j];
		}
	}
for(int i = 0; i< 3; i++){
	sum = 0;
	for(int j = 0; j<3; j++){
		printf("%d ", arr_3[i][j]);
//		sum = sum+ arr_2[i][j];
	}
	printf("\n");	
	}

}
