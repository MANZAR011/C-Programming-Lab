#include <stdio.h>
int main(){
	int balance = 5000, transaction, Dcount = 0, Wcount = 0;
	printf("Enter the amount you want to deposit/withdraw: ");
	scanf("%d", &transaction);
	while (transaction!=0){
		if (transaction<0){Wcount++;}
		else{if(transaction>0){Dcount++;}}
	balance = balance + transaction;
	printf("The updated balance is $%d.\n", balance);
	printf("Enter the amount you want to deposit/withdraw: ");
	scanf("%d", &transaction);
	}
	printf("The final balance is $%d.\n", balance);
	printf("Number of Deposits: %d.\n", Dcount);
	printf("Number of withdrawals: %d.\n", Wcount);

	
}
