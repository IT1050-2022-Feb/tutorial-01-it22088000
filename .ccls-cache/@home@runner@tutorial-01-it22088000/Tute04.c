/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(no1, no2); //function declaration
int maximum(no1, no2); //function declaration
int multiply(no1, no2); //function declaration

//function main begins program execution
int main() {
  
   int no1, no2; //variable declaration
  
   printf("Enter a value for no 1 : "); //prompt
   scanf("%d", &no1); //read the value of no1
  
   printf("Enter a value for no 2 : "); //prompt
   scanf("%d", &no2); //read the value of no2

   minimum(no1, no2);
   maximum(no1, no2);
   multiply(no1, no2);
  
   printf("%d ", minimum(no1, no2)); //prompt
   printf("%d ", maximum(no1, no2)); //prompt
   printf("%d ", multiply(no1, no2)); //prompt
  
   return 0;
  
} //end of main function

int minimum(no1, no2) //function implementation
{
  if(no1 < no2) //checking conditions
    return no1;

  else //checking conditions
    return no2;
}

int maximum(no1, no2) //function implementation
{
  if(no1 > no2) //checking conditions
    return no1;

  else //checking conditions
    return no2;
}

int multiply(no1, no2) //function implementation
{
  return no1 * no2;
}