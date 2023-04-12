#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage %s key\n", argv[0]);
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage %s key\n", argv[0]);
            return 1;
        }
    }

    int k = atoi(argv[1]);

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0, length = strlen(plaintext); i < length; i++)
    {
        if (isupper(plaintext[i]))
        {
            int letter = plaintext[i] - 65;   // bring it to 0 so that we can modulo 26 to loop back
            int c = ((letter + k) % 26) + 65; // bring back to original ascii value
            printf("%c", c);
        }
        else if (islower(plaintext[i]))
        {
            int letter = plaintext[i] - 97;   // bring it to 0 so that we can modulo 26 to loop back
            int c = ((letter + k) % 26) + 97; // bring back to original ascii value
            printf("%c", c);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}