  # C-Programming-Lab
This repository is for C programming lab exercises and assignments.
## My favourite programming languages
* Python
* C
* C++


//#include <stdio.h>
//int main(){
//	int grade1, grade2;
//	printf("Enter the score for the first subject: ");
//	scanf("%d", &grade1);
//	printf("Enter the score for the second subject: ");
//	scanf("%d", &grade2);
//	grade1>=50? (    grade2>=50?  (printf("Passed both grades."))  :  (printf("Failed one or two."))) :   printf("Failed one or more.")    ;
//}



//#include <stdio.h>
//int main(){
//	float temperature;
//	printf("Enter the temperature in celcius: ");
//	scanf("%f", &temperature);
//	if (temperature >= 20 & temperature <= 25) {
//		printf("The temperature is optimal.");}
//		else{
//			printf("The tewmperature is not optimal.");
//			
//		}
//}



//#include <stdio.h>
//int main(){
//	int a, b, answer;
//	printf("the calculation carried out will be a + b * (a-b) / 2 \n");
//	printf("Enter the first integer: ");
//	scanf("%d", &a);
//	printf("Enter the second integer: ");
//	scanf("%d", &b);
//	answer = a-b;
//	printf("The first calculation is (a - b): %d\n", answer);
//	answer = answer / 2;
//	printf("The second calculation is division: %d\n", answer);
//	answer = answer * b;
//	printf("The third calculation is multiplication: %d\n", answer);
//	answer = answer + b;
//	printf("The fourth calculation is addition: %d\n", answer);
//}




#include <stdio.h>
int main(){
	int x, y;
	printf("Enter the first integer: ");
	scanf("%d", &x);
	printf("Enter the second integer: ");
	scanf("%d", &y);
	printf("evaluation 01: x>5 and y<10\n");
	if (x>5 && y<10){printf("True.\n");}
	else{printf("False.\n");}
	printf("evaluation 02: x==10 or y==5\n");
	if (x==10 || y==5){printf("True.\n");}
	else{printf("False.\n");}
	printf("evaluation 03: x is not equal to y.\n");
	if (!(x==y)){printf("True.\n");}
	else{printf("False.\n");}
}
