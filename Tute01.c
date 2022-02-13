/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1,mark2, sum;
   float avg;
   
   printf("Input 1st subject mark :%d");
   scanf("%d",&mark1);
   
   printf("Input 2nd subject mark :%d");
   scanf("%d",&mark2);
   
   sum=mark1+mark2;
   printf("Sum of the two mark is :"sum,mark1,mark2);
   
   avg=(mark1+mark2)/2;
   printf("avarage of the two numbers is :"avg,mark1,mark2);
   
   
   
  
  return 0;
}

