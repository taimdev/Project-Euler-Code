// Taimur Azhar z5116684
// 15/05/2016
// Project Euler Problems
// Problem6 : Sum Square Difference
// Find the difference between the sum of the squares of the
// first one hundred natural numbers and the square of the sum
// Solution = 	25164150

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 100
 
int main (int argc, char const *argv[]) {
	int num = 0;
	long int sumsquare = 0;
	long int sum = 0;
	long int squaresum = 0;
	long int difference;

	while (num <= LIMIT) {
		sum += num;
		sumsquare += (num * num);
		num ++;
	}

	squaresum = sum * sum;
	difference = squaresum - sumsquare;

	printf("The Difference is %ld\n", difference);

	return EXIT_SUCCESS;
}
