#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // initialize the variable height
    int n;
    // Run the loop to get a value of height between 1 and 8, inclusive, from the user
    do
    {
        n = get_int("Hight: ");
    } while (n < 1 || n > 8);
    // Loop to add a new line
    for (int i = 0; i < n; i++)
    {
        // Loop to add spaces
        for (int k = n - i; k > 1; k--)
        {
            printf(" ");
        }
        // Loop to add hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}