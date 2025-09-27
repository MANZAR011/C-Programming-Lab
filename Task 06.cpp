#include <stdio.h>
int main (){
	int Num1, Num2, Num3;
//	printf("Enter the first number: ");
//	scanf("%d", Num1);
//	printf("Enter the second number: ");
//	scanf("%d", Num2);
	printf("Enter the third number: ");
	scanf("%d", Num3);
	Num1>Num2? Num1>Num3? (printf("The first number is the largest.")) : (printf("The third number is the largest.")):
	(Num2>Num3? printf("The second number is the largest.") : printf("The second number is the largest.")); 
	return 0;
}
