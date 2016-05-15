// Taimur Azhar z5116684
// 02/05/2016
// Project Euler Problems
// Problem1 : Multiples of 3 and 5
// Sum of 3 and 5 multiples under 1000
// Solution 233168

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[]) {
   int number = 1000;
   int counter = 0;
   int sum = 0;

   while (counter < number) {
      if (counter % 3 == 0) {
         sum += counter;
      } else if (counter % 5 == 0) {
         sum += counter;
      }

      counter++;
   }
   printf("%d\n", sum);

   return EXIT_SUCCESS;
}
