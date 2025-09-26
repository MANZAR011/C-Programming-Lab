//#include <stdio.h>
//int main(){
//	int index, final_value, count, table;
//	printf("What table do you want to print? \n");
//	scanf("%d", &table);
//	for(index=0+table;index <= table*10 ;index+=table){
//		printf("%d * %d = %d \n",table, count, index);
//		count = count +1;
//	}
//	return 0;
//}



#include <stdio.h>
int main(){
	float avg, sum = 0;
	int a[5];
	int value;
	for (int count = 1;count <= 5;count++){
		printf("The array has 5 spaces, enter number %d: ", count);
		scanf("%d", &value);
		a[count-1] = value;
	}
	for(int i = 0;i <= 4;i++){
		sum = sum+a[i];
	}
	avg = sum/5;
	printf("The sum is %.2f\n", sum);
	printf("The average is %.2f", avg);	
	return 0;
}



