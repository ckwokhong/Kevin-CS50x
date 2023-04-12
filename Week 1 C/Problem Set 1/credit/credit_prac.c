#include <stdio.h>
#include <cs50.h>
int main(void)
{
    long n;
    int totalSum = 0, pos = 0;
    do
    {
        n = get_long("Number: ");
        while (n != 0)
        {
            if (pos % 2 != 0)
            {
                int temp = 2 * (n % 10);
                if (temp > 9)
                {
                    totalSum += temp / 10 + temp % 10;
                }
                else
                {
                    totalSum += 2 * (n % 10);
                }
            }
            else
            {
                totalSum += (n % 10);
            }
            n = n / 10;
            pos++;
        }
    } while (n != 0);

    if (totalSum % 10 == 0)
    {
        printf("VALID");
    }
    else
    {
        printf("INVALID");
    }
}





// 4003600000000014
// n = n / 10
// for every "/10" it cuts the credit number shorter.
// using pos to know the location of the number (indexing)