
#include <stdio.h>
#include <string.h>
int main(){
	int array[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	int Ocount = 0, Ecount = 0, Esum = 0, Osum = 0;
	for (int i = 0; i<10; i++){
		if (array[i]%2 == 0){
			Ecount++;
			Esum = Esum + array[i];
//			printf("E\n");
		}
		else{
		
		if (array[i]%2 == 1){
			Ocount++;
			Osum = Osum + array[i];
//			printf("O\n");
		}
		else{
			printf("The value on the address %d of the array is invalid.\n");
		}
	}
	}
	if (Ecount == 0){
		printf("There are no even numbers in this array.\n");
	}
	if (Ocount == 0){
		printf("There are no odd numbers in this array.\n");
	}
	printf("The even count is: %d\n", Ecount);
	printf("The sum of even numbers is: %d\n", Esum);
	printf("The odd count is: %d\n", Ocount);
	printf("The odd numbers is: %d\n", Osum);

	
}