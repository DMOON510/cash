#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)

{
   float f;
   do
   {
       f = get_float ("Change: \n");
   }
   while (f<0);
    {
    int cents = round(f*100);
    int quarters = cents / 25;
    int dimes = (cents % 25) /10;
    int nickels = (cents % 25 % 10) / 5;
    int pennies = (cents % 25% 10 % 5)/1;
    
    int n = quarters + dimes + nickels + pennies;
       printf("I have %i coins \n", n);
    }
}

