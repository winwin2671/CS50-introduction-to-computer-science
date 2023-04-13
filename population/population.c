#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int s;
    do
    {
        s = get_int("Start: ");
    } while (s < 9);

    // TODO: Prompt for end size
    int e;
    do
    {
        e = get_int("End: ");
    } while (e < s);
    // TODO: Calculate number of years until we reach threshold

    int year = 0;

    while (s < e)
    {
        s = s + (s / 3) - (s / 4);
        year++;
    }
    // TODO: Print number of years
    printf("Years: %i\n", year);
}
