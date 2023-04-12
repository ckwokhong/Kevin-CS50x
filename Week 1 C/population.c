#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int start;
    do
    {
        start = get_int("What is the starting number of llamas? ");
    } while (start < 9);

    int goal;
    do
    {
        goal = get_int("What is the goal number of llamas? ");
    } while (goal < start);

    int year = 0;
    while (start < goal)
    {
        start += (start / 3 - start / 4);
        year++;
    }
    printf("Years: %i\n", year);
}