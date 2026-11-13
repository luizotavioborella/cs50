#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    string key = argv[1];

    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Key must contain only letters.\n");
            return 1;
        }

        key[i] = toupper(key[i]);

        for (int j = 0; j < i; j++)
        {
            if (key[i] == key[j])
            {
                printf("Key must not contain repeated letters.\n");
                return 1;
            }
        }
    }

    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", key[plaintext[i] - 'A']);
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", tolower(key[plaintext[i] - 'a']));
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }

    printf("\n");

    return 0;
}