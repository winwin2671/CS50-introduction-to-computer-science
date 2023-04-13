// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

unsigned int word_count;
unsigned int hash_value;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    // hash the word to get the value
    hash_value = hash(word);
    node *cursor = table[hash_value];

    // go though the linked list
    while (cursor != 0)
    {
        if (strcasecmp(word, cursor->word) == 0)
        {
            return true;
        }
        cursor = cursor->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    unsigned long total = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        total += tolower(word[i]);
    }
    return total % N;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    // open dictiionary file
    FILE *file = fopen(dictionary, "r");
    // file cannot open return null
    if (file == NULL)
    {
        return false;
    }
    // read str until reach the end of file
    char word[LENGTH + 1];
    while (fscanf(file, "%s", word) != EOF)
    {
        // allocate memory for new node
        node *new_node = malloc(sizeof(node));
        // return false if malloc returns NULL
        if (new_node == NULL)
        {
            return false;
        }

        // copy word into node
        strcpy(new_node->word, word);
        hash_value = hash(word);
        new_node->next = table[hash_value];
        table[hash_value] = new_node;
        word_count++;
    }
    fclose(file);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    if (word_count > 0)
    {
        return word_count;
    }
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    // iterate through buckets
    for (int i = 0; i < N; i++)
    {
        // set cursor to the start of the linked list
        node *cursor = table[i];

        // free memory
        while (cursor)
        {
            node *tmp = cursor;
            cursor = cursor->next;
            free(tmp);
        }
    }
    return true;
}
