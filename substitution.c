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
