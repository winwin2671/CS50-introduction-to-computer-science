#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get card number
    long n = get_long("Enter your credit card number: ");

    // Count length
    int i = 0;
    long cc = n;
    while (cc > 0)
    {
        cc = cc / 10;
        i++;
    }

    // check valid
    if (i != 13 && i != 15 && i != 16)
    {
        printf("INVALID\n");
        return 0;
    }

    // checksum
    int sum1 = 0;
    int sum2 = 0;
    long x = n;
    int total = 0;
    int mod1;
    int mod2;
    int d1;
    int d2;
    int counter = 0;

    while (x > 0)
    {
        counter++;
        // get the last digit
        mod1 = x % 10;
        x = x / 10;

        // check if we need to double this digit
        if (counter % 2 == 0)
        {
            mod2 = mod1 * 2;
            d1 = mod2 % 10;
            d2 = mod2 / 10;
            sum2 = sum2 + d1 + d2;
        }
        else
        {
            sum1 = sum1 + mod1;
        }
    }

    total = sum1 + sum2;

    // check validity
    if (total % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // Get starting digits
    long start = n;
    while (start >= 100)
    {
        start = start / 10;
    }

    if ((start >= 40 && start < 50) && (i == 13 || i == 16))
    {
        printf("VISA\n");
    }
    else if ((start >= 51 && start <= 55) && (i == 16))
    {
        printf("MASTERCARD\n");
    }
    else if ((start == 34 || start == 37) && (i == 15))
    {
        printf("AMEX\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
