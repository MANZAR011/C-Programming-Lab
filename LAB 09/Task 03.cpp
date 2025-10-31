#include <stdio.h>
void displayMatrix(int arr[2][3]){
	printf("%d %d %d \n", arr[0][0], arr[0][1], arr[0][2]);
	printf("%d %d %d \n", arr[1][0], arr[1][1], arr[1][2]);
	
}

int calculateSum(int arr[2][3]){
	int sum = 0;
	for(int i = 0; i< 2; i++){
		for(int j = 0; j<3; j++){
			sum = sum+arr[i][j];
		}
	}
	printf("The sum is: %d\n", sum);
}

float calculateAverage(int arr[2][3]){
	int sum = 0;
	for(int i = 0; i< 2; i++){
		for(int j = 0; j<3; j++){
			sum = sum+arr[i][j];
		}
	}
	float avg = sum /6;
	printf("Average of the values in array is: %f\n", avg);
}

int findMax(int arr[2][3]){
	int max = 0;
	for(int i = 0; i< 2; i++){
		for(int j = 0; j<3; j++){
			if (arr[i][j] > max){
				max = arr[i][j];
			}
		}
	}
	printf("The maximum value is: %d", max);
}

int main(){
	int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};
	displayMatrix(arr);
	calculateSum(arr);
	calculateAverage(arr);
	findMax(arr);
}

