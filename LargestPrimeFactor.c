// Taimur Azhar z5116684
// 02/05/2016
// Project Euler Problems
// Problem3 : Largeset Prime Factor
// What is the largest prime factor of the number 600851475143?
// Solution : 6857

#include <stdio.h>
#include <stdlib.h>
 
#define NUMBER 600851475143

int isPrime(long int factornum);

int main (int argc, char const *argv[]) {
   long int factornum = 2;
   long int store = 0;

   while (factornum < (NUMBER / 2)) {
      if (NUMBER % factornum == 0) {
         if (isPrime(factornum) == 1) {
            store = factornum;
            printf("%ld\n", store);
         } 
      }
   factornum ++;  
   }

   printf(" store is %ld\n", store);

   return EXIT_SUCCESS;
}

int isPrime(long int factornum) {
   long int counter = 2;
   int prime = 0;

   while (counter < (factornum / 2)) {
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
