#include <stdio.h>
int findMax(int arr[5], int size){
	int max = 0;
	for(int i = 0; i< size; i++){
		if (arr[i] > max){
			max = arr[i];
		}
	}
	printf("The maximum value is: %d", max);
}
int main(){
	int arr[5] = {2, 4, 12, 8, 10};
	int size = 5;
	findMax(arr, size);
}
