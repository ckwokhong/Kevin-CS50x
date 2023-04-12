#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{

    string word = get_string("Word: ");
    for (int i = 0; i < strlen(word); i++)
    {
        if ((word[i] > word[i - 1]))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No");
        }
    }
}