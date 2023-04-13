#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    if (strlen(argv[1]) != 26)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    string inputstr = argv[1];
    char key[26];

    bool duplicate[26];
    for (int i = 0; i < 26; i++)
    {
        duplicate[i] = false;
    }

    for (int i = 0; i < 26; i++)
    {
        if (isalpha(inputstr[i]))
        {
            if (isupper(inputstr[i]))
            {
                if (duplicate[inputstr[i] - 'A'] == true)
                {
                    printf("can not contain duplicate letters\n");
                    return 1;
                }
                else
                {
                    duplicate[inputstr[i] - 'A'] = true;
                    key[i] = inputstr[i] - 'A';
                }
            }
            else
            {
                if (duplicate[inputstr[i] - 'a'] == true)
                {
                    printf("can not contain duplicate letters\n");
                    return 1;
                }
                else
                {
                    duplicate[inputstr[i] - 'a'] = true;
                    key[i] = inputstr[i] - 'a';
                }
            }
        }
        else
        {
            printf("Please use letters only\n");
            return 1;
        }
    }

    string plaintext = get_string("plaintext: ");

    string ciphertext = plaintext;

    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]))
            {
                ciphertext[i] = (key[plaintext[i] - 'A'] + 'A');
            }
            else
            {
                ciphertext[i] = (key[plaintext[i] - 'a'] + 'a');
            }
        }
        else
        {
            ciphertext[i] = plaintext[i];
        }
    }

    printf("ciphertext: %s\n", ciphertext);
    return 0;
}