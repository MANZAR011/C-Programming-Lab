#include <stdio.h>
int main(){
	int Num;
	printf("Enter a number: ");
	scanf("%d", &Num);
	for(int i=1; i<=10; i++){
		printf("%d * %d = %d\n", Num, i, Num*i);
	}
}
