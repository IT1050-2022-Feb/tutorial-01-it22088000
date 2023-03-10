/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

//fuction main begins program execution
int main() {

  float mark1, mark2, average; //variable declaration

  printf("Input mark for subject 1 : "); //prompt
  scanf("%f", &mark1); //read the mark for subject 1

  printf("Input mark for subject 2 : "); //prompt
  scanf("%f", &mark2); //read the mark for subject 2

  average = (mark1 + mark2) / 2; //calculate the average

  printf("Average of the two marks is %.2f", average); //prompt
  
  return 0;
  
} //end of main function

