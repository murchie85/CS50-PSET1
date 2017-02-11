#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>
/* Adam McMurchie
CS50 PSET1
Any issues contact murchie85@gmail.com
*/

   
/* 
NOTES FROM CLASS IGNORE
how much change is owed to customer 
give the fewest possible
so start from the highest coin
possibly a switch statement
25, 10, 5, 1
or go through each until 1= no
keep track of coins

input in dollars
get float
convert to cents
round it
check for negative

continuosly checking if we can use a quarter, while we can use a quarter
user it loops
use a variable for tracking coins
loop
get amount in dollars
  while (quarters can be used)
    increase count
    amount decreased by a quarter
while dimes can be used...

print number of coins used


modular method
represented by %

   */
   
   

#include <stdio.h>
#include <math.h>
#include <cs50.h>

float promptUser(void);
void checkNegNumbers(int);
int calculateCoins(int);

int main(void)
 {
     float n;
     int count = 0, amount;

     // prompts user for amount owed and validates input
     do
     {
         printf("How much Change  is owed?\n");
         n = GetFloat();
     }
     while (n < 0);


    // convert input into cents
     n *= 100.0;
     amount = (int) round(n);

     // tallies quarters
     while (amount >= 25)
     {
         count++;
         amount -= 25;
     }

     // tallies dimes
     while (amount >= 10)
     {
         count++;
         amount -= 10;
     }

     // tallies nickels
     while (amount >= 5)
     {
         count++;
         amount -= 5;
     }

     // tallies pennies
     while (amount >= 1)
     {
         count++;
         amount -= 1;
     }

     // the greedy number i.e. the min number of coins to satisfy change demand 
     printf("%d\n", count);

     return 0;
 }

