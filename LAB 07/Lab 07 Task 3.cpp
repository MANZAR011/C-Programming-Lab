#include <stdio.h>
#include <string.h>
int main(){
	char arr[100];
	char abc;
	int count;
	printf("Enter the Character: ");
	scanf("%c", &abc);
	
	printf("Enter the array: ");
	scanf("%s", &arr);
	
	for (int i = 0; i<strlen(arr); i++){
		if (arr[i] == abc){
			count++;
		}
	}
	printf("count: %d", count);


}
