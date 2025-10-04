// Task 01
#include <stdio.h>
int main(){
	int Num, Ecount = 0, Ocount = 0;
	char ch = 'y';
	do{
	printf("PLease enter your number: ");
	scanf("%d", &Num);
	if(Num%2==0)
	{
	Ecount= Ecount + 1;
	printf("The number is even.\n");
	}
	else
	{Ocount = Ocount + 1;
	printf("The number is odd.\n");
	}
	printf("Do you want to continue? (y/n): ");
	scanf(" %c", &ch);
} while (ch == 'y');
printf("There are %d even numbers.\n", Ecount);
printf("There are %d odd numbers.\n", Ocount);
}
