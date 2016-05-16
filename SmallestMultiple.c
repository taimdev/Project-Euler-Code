// Taimur Azhar z5116684
// 16/05/2016
// Project Euler Problems
// Problem5 : Smallest Multiple
// Smallest positive number evenly divisble by numbers from 1-20
// Solution: 232792560

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 20
 
int main (int argc, char const *argv[]) {
	int num = 1;
	int divider = 1;

	while (divider < 20) {
		if (num % divider == 0) {
			divider ++;
		} else {
			num++;
			divider = 1;
		}
	}

	printf("The smallest number is %d\n", num);

   return EXIT_SUCCESS;
}
