// Lab array task
#include <stdio.h>
int main(){
	int arr_1[3][3];
	int arr_2[3][3];


	int sum= 0, largest = 0, smallest = 1000000, largest_sum = 0, row;
	for(int i = 0; i< 3; i++){
		for(int j = 0; j< 3; j++){
			printf("Enter the value for row %d, column %d: ", i+1, j+1);
			scanf("%d", &arr_1[i][j]);
		}
	}
for(int i = 0; i< 3; i++){
	for(int j = 0; j<3; j++){
		printf("%d ", arr_1[i][j]);
	}
	printf("\n");	
	}
	
printf("\n\n");
for(int i = 0; i< 3; i++){
	for(int j = 0; j<3; j++){
	arr_2[j][i] = arr_1[i][j];
	}	
	}
printf("The second matrix: \n");
for(int i = 0; i< 3; i++){
	for(int j = 0; j<3; j++){
		printf("%d ", arr_2[i][j]);
	}
	printf("\n");	
	}
int symmetric = 1;
for(int i = 0; i< 3; i++){
	for(int j = 0; j<3; j++){
		if (arr_2[i][j] != arr_1[i][j]){
			symmetric = 0;
		}
	
	}	
	
}

printf("\n\n");
if(symmetric == 1){
	printf("The matrix is symmetric.\n");
}
else{
	printf("The matrix is not symmetric.\n");
}
}

