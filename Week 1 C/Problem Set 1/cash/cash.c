#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    printf("quarters %i\n", quarters);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    printf("dimes %i\n", dimes);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    printf("nickels %i\n", nickels);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    printf("pennies %i\n", pennies);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    int c = 0;
    do
    {
        c = get_int("Change owed: ");
    } while (c < 0);
    return c;
}

int calculate_quarters(int cents)
{
    // TODO
    if (cents >= 25)
    {
        int quarters = cents / 25;
        return quarters;
    }
    else
    {
        return 0;
    }
}

int calculate_dimes(int cents)
{
    // TODO
    if (cents >= 10)
    {
        int dimes = cents / 10;
        return dimes;
    }
    else
    {
        return 0;
    }
}

int calculate_nickels(int cents)
{
    // TODO
    if (cents >= 5)
    {
        int nickels = cents / 5;
        return nickels;
    }
    else
    {
        return 0;
    }
}

int calculate_pennies(int cents)
{
    // TODO
    if (cents >= 1)
    {
        int pennies = cents / 1;
        return pennies;
    }
    else
    {
        return 0;
    }
}
