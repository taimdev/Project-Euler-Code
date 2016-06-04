// Taimur Azhar z5116684
// 19/05/2016
// Project Euler Problems
// Problem12 : Highly divisible triangular number
// What is the value of the first triangle number to have over five hundred divisors?
// Solution: 76576500

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 500
 
int divNoFunc (int triangle); 
int triangleFunc (int num, int triangle);
int main (int argc, char const *argv[]) {
	//int index = 0;
	int num = 0;
	int divNo = 0;
	int triangle = 0;

	while (divNo <= 500) {
		num ++;		
		triangle = triangleFunc(num, triangle);
		divNo = divNoFunc(triangle);
		printf("DivNo is %d\n", divNo);
	}
	printf("Answer is %d with %d dividers\n", triangle, divNo);

   return EXIT_SUCCESS;
}

int divNoFunc (int triangle) {
	int divNo = 0;
	int divider = 1;
	while (divider < triangle) {
		if (triangle % divider == 0) {
			divNo ++;
			//printf("hello\n");
		}
		divider ++;
	}


	return divNo;
}


int triangleFunc (int num, int triangle) {
	int triangleNo;
	triangleNo = triangle + num;

	return triangleNo;
}
