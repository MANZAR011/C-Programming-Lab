// Lab array task
#include <stdio.h>
int main(){
	int arr[3][3];
	int sum= 0, largest = 0, smallest = 1000000, largest_sum = 0, row;
	for(int i = 0; i< 3; i++){
		for(int j = 0; j< 3; j++){
			printf("Enter the value for row %d, column %d: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
for(int i = 0; i< 3; i++){
	sum = 0;
	for(int j = 0; j<3; j++){
		printf("%d ", arr[i][j]);
		sum = sum+ arr[i][j];
//		if(arr[i][j] > largest){
//			largest = arr[i][j];
//		}
//		if(arr[i][j] < smallest){
//			smallest = arr[i][j];
//		}

	}
	if(sum > largest_sum){
			largest_sum = sum;
			row = i+1;
		}
	printf("\n");
	
		
	}
printf("Row %d has the highest sum of %d\n", row, largest_sum);
//printf("Largest: %d\n", largest);
//printf("Smallest: %d", smallest);

}

