#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("What is the size? ");
    } while (n < 1);

    int array[n];
    array[0] = 1;
    printf("%i\n", array[0]);
    for (int i = 1; i < n; i++)
    {

        array[i] = array[i - 1] * 2;
        printf("%i\n", array[i]);
    }

    // print output
    // printf(array);
}