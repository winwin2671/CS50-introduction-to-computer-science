#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string names[] = {"James", "John", "Bill", "Will"};

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(names[i], "James") == 0)
        {
            printf("found\n");
            return 0;
        }
    }
    printf("not found \n");
    return 1;
}