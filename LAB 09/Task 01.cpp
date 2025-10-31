#include <stdio.h>
int square(int Num){
	return Num*Num;
}
int main(){
	int Num;
	printf("Enter a number: ");
	scanf("%d", &Num);
	int result = square(Num);
	printf("Square of your number is: %d", result);
}
