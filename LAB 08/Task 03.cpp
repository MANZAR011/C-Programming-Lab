// Lab array task
#include <stdio.h>
int main(){
	int n, dia_1 = 0, dia_2 = 0;
	printf("Enter the number of rows and columns for your matrix: \n");
	scanf("%d", &n);
	int arr[n][n];
	for(int i = 0; i< n; i++){
		for(int j = 0; j< n; j++){
			printf("Enter the value for row %d, column %d: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
for(int i = 0; i< n; i++){
	for(int j = 0; j<n; j++){
		printf("%d ", arr[i][j]);
	}
	printf("\n");	
	}
	
	
for(int i = 0; i< n; i++){
	dia_1 = dia_1 + arr[i][i];	
	}
int num = n;
for(int i = 0; i< n; i++){
	dia_2 = dia_2 + arr[i][num-1];
	num--;
	}
	
	
printf("The sum of Sirst diagonal: %d\n", dia_1);
printf("The sum of Second diagonal: %d\n", dia_2);
int dia_sum = dia_1 + dia_2;
printf("The sum of both diagonals: %d\n", dia_sum);



}

	
	
	

