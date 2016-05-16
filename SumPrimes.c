// Taimur Azhar z5116684
// 16/05/2016
// Project Euler Problems
// Problem10 : Summation of Primes
// Sum of all primes under 2 million
// Solution: 142913828922

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 200
 
int isPrime(long int factornum);

int main (int argc, char const *argv[]) {
	int num = 0;
	long int sum = 0;

	while (num < LIMIT) {
		if (isPrime(num) == 1) {
			printf("The primes are %d\n", num);
			sum += num;
		}
		num ++;
	}

	//Had to slightly re-adjust because in my is prime function, two is not considered a prime number
	sum += 2; 
	printf("The sum is %ld\n", sum);

   return EXIT_SUCCESS;
}

// Function from a previous code FUNCTIONS ARE AMAZING
// Had to be adjusted slightly because with the divide/2 to speed it up, i was losing soutions
// I could probably improve this function if i either use the sieve or hard code 2, 3 and 5
int isPrime(long int factornum) {
   long int counter = 2;
   int prime = 0;

   while (counter < factornum) {
      if (factornum % counter == 0) {
         prime = 0;
         counter = factornum;
      } else {
         prime = 1;
      }
      counter ++;
   }

   return prime;
}
