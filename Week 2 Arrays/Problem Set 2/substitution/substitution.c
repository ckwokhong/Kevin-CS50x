#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string key = argv[1];

    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    for (int i = 0, length = strlen(key); i < length; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
    }
    if (strlen(key) < 26)
    {
        {
            printf("Key must contain 26 characters\n");
            return 1;
        }
    }

    for (int i = 0; i < strlen(key); i++)
    {
        for (int j = i + 1; j < strlen(key); j++)
        {
            if (toupper(key[i]) == toupper(key[j]))
            {
                printf("Usage: ./substitution key\n");
                return 1;
            }
        }
    }

    // TODO Substitution can start here

    // prompt user for plaintext
    string plaintext = get_string("plaintext: ");

    for (int i = 0; i < strlen(key); i++)
    {
        if (islower(key[i]))
        {
            key[i] = key[i] - 32;
        }
    }
    printf("ciphertext: ");

    // JTREKYAVOGDXPSNCUIZLFBMWHQ
    // plaintext: Hello
    int pos;
    for (int i = 0; i < strlen(plaintext); i++)
    {
        // get position
        if (isupper(plaintext[i]))
        {
            pos = plaintext[i] - 65;
            printf("%c", key[pos]);
        }
        else if (islower(plaintext[i]))
        {
            pos = plaintext[i] - 97;
            printf("%c", key[pos] + 32);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}