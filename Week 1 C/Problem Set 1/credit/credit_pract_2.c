#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long n;
    int pos = 0, totalSum = 0;
    do
    {
        n = get_long("Number: :");
        while (n != 0)
        {
            if (pos % 2 == 0)
            {
                totalSum += n % 10;
            }
            else
            {
                int temp = 2 * (n % 10);
                if (temp < 9)
                {
                    totalSum += 2 * (n % 10);
                }
                else
                {
                    totalSum += temp / 10 + temp % 10;
                }
            }
            n = n / 10;
            pos++;
        }
    } while (n != 0);
    printf("total sum:   %i ", totalSum);
    if (totalSum % 10 == 0)
    {
        printf("Valid\n");
    }
    else
    {
        printf("Invalid\n");
    }
}
// 4003600000000014
// n = n / 10
// for every "/10" it cuts the credit number shorter.
// using pos to know the location of the number (indexing)