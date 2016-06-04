// Taimur Azhar z5116684
// 16/05/2016
// Project Euler Problems
// Problem9 : Special Pythagorean Triplet
// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.
// a = 375 , b = 200, c = 425
// Product = 31,875,000

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 500000
 
int main (int argc, char const *argv[]) {
	int a = 1;
	int b = 1;
	int av = 0;
	int bv = 0;
	long int equation = 1000 * (a + b) - a * b;

	while (a < 1000) {
		while (b < 1000) {
			equation = 1000 * (a + b) - a * b;
			if (equation == LIMIT) {
				av = a;
				bv = b;
			}
			printf("value is %ld\n", equation);
			b++;
		}
		b = 1;
		a++;
	}


	printf("A is %d", av);
	printf("B is %d", bv);

   return EXIT_SUCCESS;
}
