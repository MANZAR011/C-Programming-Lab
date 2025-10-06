#include <stdio.h>
int main(){
	int Num, Sum = 0;
	char ch = 'y';
	while(ch == 'y'){
	printf("Enter a number: ");
	scanf("%d", &Num);
	Sum += Num;
	printf("Current sum: %d\n", Sum);
	printf("Do you want to enter another number? (y for yes / n for no): ");
	scanf(" %c", &ch);
	}
	printf("Final sum: %d\n", Sum);
}
