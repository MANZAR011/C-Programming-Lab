#include <stdio.h>
int main(){
	int grade, sum = 0, Tcount = 0, high_count = 0, med_count = 0, low_count = 0;
	float avg;
	do {
		printf("Enter a grade: ");
		scanf("%d", &grade);
		if(grade!= -1){
		printf("The grade you entered is %d.\n", grade);
		Tcount++;
		if(grade>70){high_count++;}
		else{
		if (grade<50){low_count++;}
		else {med_count++;}
	}
		sum = sum + grade;
	}
		printf("sum %d\n", sum);
		printf("total %d\n", Tcount);

	} while (grade != -1);
	avg = sum/Tcount;
	printf("The average of the grades entered is: %f\n", avg);
	printf("Number of grades greater than 70: %d\n", high_count);
	printf("Number of grades between 50 and 70: %d\n", med_count);
	printf("Number of grades below 50: %d\n", low_count);

}
