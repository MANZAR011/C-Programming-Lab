#include <stdio.h>
int main(){
	int Vcount = 0, Ccount = 0;
	char ch = 'y', input;
	do{
	printf("PLease enter an alphabet: ");
	scanf(" %c", &input);
	if(input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u'
	|| input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U')
	{Vcount= Vcount + 1;}
	else
	{Ccount = Ccount + 1;}
	printf("Do you want to continue? (y/n): ");
	scanf(" %c", &ch);
} while (ch == 'y');
printf("There are %d vowels.\n", Vcount);
printf("There are %d consonents.\n", Ccount);
}
