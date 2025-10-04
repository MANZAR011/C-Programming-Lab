#include <stdio.h>
int main(){
	int Num1 = 0, Num2 = 1, New, n, sum = 0;
	printf("Till what term do you want the Fibonacci sequence? ");
	scanf("%d", &n);
	printf("%d ", Num1);
	printf("%d ", Num2);
	sum = 1;
	for(int i = 1; i<=(n-2); i++){
		New = Num1 + Num2;
		printf("%d ", New);
		Num1 = Num2;
		Num2 = New;
		sum = sum + New;
		
	}
printf("\nThe sum of the terms of the sequence is: %d", sum);

}
