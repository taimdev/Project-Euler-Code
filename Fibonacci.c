// Taimur Azhar z5116684
// 02/05/2016
// Project Euler Problems
// Problem2 : Even Fibonacci Numbers
// Sum of all the even Fibonacci numbers below 4,000,000
// Solution : 4613732

#include <stdio.h>
#include <stdlib.h>
 
#define LIMIT 4000000

int main (int argc, char const *argv[]) {
   int number = 2;
   int prenumber = 1;
   int store = 0;
   int sum = 0;

   while (number < LIMIT) {
      //printf("%d\n", number); for debugging
      if (number % 2 == 0) {
         sum += number;
      }
      store = number + prenumber;
      prenumber = number;
      number = store;
   }
   
   printf("Sum is %d\n", sum);

   return EXIT_SUCCESS;
}
