#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{   
    float cash;
    
    do
    {
        cash = get_float("Change owed: ");
    }
    while(cash <= 0);
    
    int cents = round(cash * 100); //converts to cash
    
    int quarters = cents / 25; //how many quarters in the change
    
    int dimes = (cents % 25) / 10; //remainder from quarters div by 10 for # of dimes
    
    int nickels = (((cents % 25) % 10) / 5); //remainder from dimes div by 5 for # nickels
    
    int pennies = (((cents % 25) % 10) % 5); //remainder from nickels

    printf("You're getting %i coins\n", quarters + dimes + nickels + pennies);
}
