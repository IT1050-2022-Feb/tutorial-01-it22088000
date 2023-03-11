/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

//function main begins program execution
int main() {

  int n, i, sum = 0; //variable declaration

  printf("Input a value for n : "); //prompt
  scanf("%d", &n); //read the value of n

  for(i = 1; i <= n; i++) //checking conditions
    {
      sum = sum + i; //calculate the sum
    }

  printf("Sum = %d", sum); //prompt
  
  return 0;
  
} //enf of main function

