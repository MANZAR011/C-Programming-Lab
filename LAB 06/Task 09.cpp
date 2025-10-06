#include <stdio.h>
int main(){
	int Num, L = 0, S = 1000000;
	char ch = 'y';
	while(ch == 'y'){
	printf("Enter a number: ");
	scanf("%d", &Num);
	if (Num > L){ L = Num; }
	if (Num < S){ S = Num; }
	printf("Smallest Number: %d\n", S);
	printf("Largest Number: %d\n\n", L);
	printf("Do you want to continue? (yes/no): ");
	scanf("\n%c", &ch);
	}
	printf("Smallest Number: %d\n", S);
	printf("Largest Number: %d\n", L);

}
