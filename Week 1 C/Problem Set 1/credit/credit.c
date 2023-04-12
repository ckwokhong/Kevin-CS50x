#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long credit;
    long credit_copy;
    int total_sum = 0, pos = 0;

    do
    {
        credit = get_long("Number: ");
        credit_copy = credit;
        while (credit != 0)
        {
            if (pos % 2 != 0) // EVEN NUMBERED POSITION
            {
                int temp = 2 * (credit % 10);
                if (temp > 9)
                {
                    total_sum += temp % 10 + temp / 10;
                }
                else
                {
                    total_sum += temp;
                }
            }
            else
            { // ODD NUMBERED POSITION
                total_sum += (credit % 10);
            }
            credit = credit / 10;
            pos++;
        }

    } while (credit != 0);

    if (total_sum % 10 == 0)
    {
        // American Express numbers start with 34 or 37 and 15-digit numbers
        // MasterCard numbers start with 51, 52, 53, 54, or 55 and MasterCard 16-digit numbers
        // Visa numbers start with 4, 13 and 16-digit numbers
        //  CHECK DIGIT NUMBERS

        int amex_start = credit_copy / 10000000000000;

        if ((amex_start == 34 || amex_start == 37) && pos == 15)
        {
            printf("AMEX\n");
            return 0;
        }
        // MASTERCARD
        int master_card_start = credit_copy / 100000000000000;

        if (pos == 16 && (master_card_start >= 51 && master_card_start <= 55))
        {
            printf("MASTERCARD\n");
            return 0;
        }

        // VISA
        int visa_start = credit_copy / 1000000000000;

        if ((visa_start == 4 || master_card_start / 10 == 4) && (pos == 13 || pos == 16))
        {
            printf("VISA\n");
            return 0;
        }
        printf("INVALID\n");
    }
    else
    {
        printf("INVALID\n");
    }
}