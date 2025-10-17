#include <stdio.h>
#include <string.h>
int main(){
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int temp, len = 9, sum = 0;
	printf("Original array: ");
	for (int i = 0; i<10; i++){
		printf("%d ", arr[i]);
	}
	for (int i = 0; i<5; i++){
		temp = arr[i];
		arr [i] = arr[len];
		arr[len] = temp;
		len--;
	}
	printf("\nNew array: ");
	for (int i = 0; i<10; i++){
		printf("%d ", arr[i]);
	}
	for (int i = 0; i<10; i++){
		sum = sum + arr[i];
	}
	printf("\nThe sum is %d", sum);
	
}