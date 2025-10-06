#include <stdio.h>
int main(){
	int Num, Ans = 1;
	printf("Enter a number: ");
	scanf("%d", &Num);
	for (int i = Num; i>1; i--){
//		printf("%d", i);
		Ans = Ans*(i);		
	}
	printf("%d! is equal to %d.",Num, Ans);
}
