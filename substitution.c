#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool find_duplicates(char str[]);
bool not_alpha(char key[]);
void encode(string plaintext, string key);

int main(int argc, string argv[])
{
    string key = argv[1];

    // Check valid key
    if (argc != 2)
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }
    else if (strlen(key) != 26)
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }
    else if (find_duplicates(key) == true)
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }
    else if (not_alpha(key) == true)
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }

    string plaintext = get_string("plaintext: "); // To leave this unchanged, you must make a copy
                                                  // before calling the encode function.
    encode(plaintext, key);

    printf("ciphertext: %s\n", plaintext); // directly changes characters in plaintext rather than
                                           // creating a new string for ciphertext.
    // Hence, ciphertext is printed via the plaintext string ...
    // Memory-efficient as you don't need to allocate memory to/for the (new variable) ciphertext,
    // but it does destroy original plaintext.

    return 0;
}

bool find_duplicates(char str[])
{
    int checker = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        /*
        int val = tolower(str[i]) - 'a'; // Calculate position of specific character
        if ((checker & (1 << val)) > 0) // Check if bit at val position is already set
        {
            return true;
        }
        else
        {
            checker |= (1 << val);
            return false;
        }
        */
        for (int j = i + 1; j < strlen(str); j++)
        {
            if (tolower(str[i]) == tolower(str[j]))
            {
                return true;
            }
        }
    }
    return false;
}

bool not_alpha(char key[])
{
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isalpha(key[i]))
        {
            return true;
        }
    }
    return false;
}

void encode(string plaintext, string key)
{
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]))
            {
                plaintext[i] = toupper(key[plaintext[i] - 'A']);
            }
            else
            {
                plaintext[i] = tolower(key[plaintext[i] - 'a']);
            }
        }
    }
}
