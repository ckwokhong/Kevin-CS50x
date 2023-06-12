#include <cs50.h>

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    // TODO
    //123
    int count = strlen(input);
    int num = 0;

    if (count == 0){
        return 0;
    }
    else{
        // To get the actual positive number from ASCII
        num = input[count-1] - '0';
        input[count-1] = '\0';

        return num + convert(input) * 10;

    }

}




    // int count = strlen(input);
    // int num = 0;

    // // recursive base case
    // if ( count == 0)
    // {
    //     return num;
    // }
    // else
    // {
    //     num = input[count - 1] - '0';
    //     input[count - 1] = '\0';

    //     return num + convert(input) * 10;
    // }