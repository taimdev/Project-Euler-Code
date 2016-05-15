// Taimur Azhar z5116684
// 03/05/2016
// Project Euler Problems
// Problem4 : Largest Palindrome Number
// Find the largest palindrome made from the product of two 3-digit numbers.
// Solution :  906609

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 1000 // limit of a 3 digit number
#define MAXLENGTH 6 // Maximum length of the product of two 3 digit numbers

int intarray (int product);

int main (int argc, char const *argv[]) {
   int num1 = 0;
   int num2 = 0;
   int store = 0;
   int product = 0;

   while (num1 < LIMIT) {
      while (num2 < LIMIT) {
         product = num1 * num2;

         if (intarray(product) == 1) {
            store = product;
         }

         num2 ++;
      }
      num2 = 0;
      num1 ++;
   }
   printf("%d\n", store);

   return EXIT_SUCCESS;
}


int intarray (int product) {
   int lencounter = product;
   int arraycounter = product;
   int numlength = 0;
   int i = 0; 
   int result;

   while (lencounter != 0) {
      lencounter /= 10;
      numlength++;
   }
   
   printf("Length is %d\n", numlength);

   int numarray[numlength] ;
   int reverse[numlength] ;

   while (arraycounter != 0) {
      reverse[i] = arraycounter % 10;
      arraycounter /= 10;
      printf("digit is %d\n", reverse[i] );
      i ++;
      
   }

   i = 0;

   while (i < numlength) {
      //printf("%d", reverse[i]);
      numarray[i] = reverse[numlength - i - 1];
      printf("%d", numarray[i]);
      i++;
   }
   
   printf("\n");

   i = 0;
   int palin = 0;

   while (i <= numlength) {
      if (numarray[i] == reverse[i]) {
         palin++;
      } 
      i++;
   }

   if (palin == numlength) {
      result = 1;
   } else {
   	  result = 0;
   }

   printf("%d", result); 
    
   return result;
}
