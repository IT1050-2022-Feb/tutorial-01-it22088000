/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

//function main begins program execution
int main() {

  float distance, amount; //variable declaration

  printf("Input the distance the van has travelled : "); //prompt
  scanf("%f", &distance); //read the distance

  if(distance <= 30) //checking conditions
    amount = distance * 50.0; //calculate the amount

  else if(distance >= 30) //checking conditions
    amount = 30.0 * 50.0 + (distance - 30) * 40.0; //calculate the amount

  printf("Amount to be paid = Rs.%.2f", amount); //prompt
  
  return 0;
  
} //end of main function
