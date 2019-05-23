#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int height;
        
    do
    {
        height = get_int("Height: ");
    }
    while (height<1 || height>8);
    
    for (int rows = 1; rows <= height; rows++)
    {
        for (int dots = height - rows; dots >0; dots--)
        {
            printf(" ");
        }
        for (int hash = 0; hash < rows; hash++)
        {
            printf("#");
        }
        printf("\n");
    }   
}
