#include <stdio.h>
int main(){
	int arr[5];
	for (int i = 0; i < 5; i++){
		printf("Enter value %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	int *p = arr;
	for (int i = 0; i<5; i++){
		printf("Address of arr[%d]: %d, value: %d\n",i, (p + i), *(p+i));
	}
}
