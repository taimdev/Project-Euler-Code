// Taimur Azhar z5116684
// 15/05/2016
// Project Euler Problems
// Problem7 : 10001st prime
// What is the 10 001st prime number?
// Solution : 104743

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 10001
#define TRUE 1
#define FALSE 0
 
int isPrime(long int factornum);

int main (int argc, char const *argv[]) {
   int counter = 0;
   long int num = 2;

   while (counter <= LIMIT) {
      if (isPrime (num) == TRUE) {
         counter ++;
      }
      num ++;
   }
   // because an extra 1 is added after the loop finishes
   num = num -1;

   printf("The 1000st Prime Number is %ld\n", num;

   return EXIT_SUCCESS;
}

// Calling this from a previous project Euler excercise
int isPrime(long int factornum) {
   long int counter = 2;
   int prime = TRUE;

   while (counter < (factornum / 2)) {
      if (factornum % counter == 0) {
         prime = FALSE;
         counter = factornum;
      } else {
         prime = TRUE;
      }
      counter ++;
   }

   return prime;
}
